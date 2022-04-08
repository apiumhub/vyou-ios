import CommonCrypto
import CryptoSwift
import Foundation
import VYouCore

internal class CryptManager {
    let publicSaltBase64: String
    
    init(publicSaltBase64: String) {
        self.publicSaltBase64 = publicSaltBase64
    }
    
    internal func generatePKCE() -> PKCE {
        let verifier = UUID().uuidString.bytes.sha1().toBase64()
            .replacingOccurrences(of: "+", with: "-")
            .replacingOccurrences(of: "/", with: "_")
            .replacingOccurrences(of: "=", with: "")
        
        let challenge = verifier.bytes.sha256().toBase64()
            .replacingOccurrences(of: "+", with: "-")
            .replacingOccurrences(of: "/", with: "_")
            .replacingOccurrences(of: "=", with: "")
        
        return PKCE(verifier: verifier, challenge: challenge)
    }
    
    internal func encryptPassword(email: String, password: String) -> String {
        let chain = "\(publicSaltBase64)\(email)"
        let saltBytes = chain.bytes.sha512().prefix(16)
        let seed = Array<UInt8>(saltBytes)
        let salt = Bcrypt.generateSalt(cost: 12, seed: seed)
        
        let digest = (try? Bcrypt.hash(password, salt: salt)) ?? ""
        return digest
    }
}
