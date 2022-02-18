import CommonCrypto
import CryptoSwift
import Foundation
import VYouCore
import Bcrypt

internal class CryptManager {
    private let publicSaltBase64: String
    
    internal init(publicSaltBase64: String) {
        self.publicSaltBase64 = publicSaltBase64
    }
    
    internal func pkce() -> PKCE {
        let verifier = UUID().uuidString.bytes.sha1().toBase64()
            .replacingOccurrences(of: "+", with: "-")
            .replacingOccurrences(of: "/", with: "_")
        
        let challenge = verifier.bytes.sha256().toBase64()
            .replacingOccurrences(of: "+", with: "-")
            .replacingOccurrences(of: "/", with: "_")
        
        return PKCE(verifier: verifier, challenge: challenge)
    }
    
    internal func bCrypt(email: String, password: String) -> String {
        let saltBytes = "\(publicSaltBase64)\(email)".bytes.sha512().prefix(16)
        let seed = Array<UInt8>(saltBytes)
        let salt = Bcrypt.generateSalt(cost: 12, seed: seed)
        
        let digest = (try? Bcrypt.hash(password, salt: salt)) ?? ""
        return digest
    }
}
