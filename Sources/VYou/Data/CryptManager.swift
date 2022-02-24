import CommonCrypto
import CryptoSwift
import Foundation
import VYouCore
import Bcrypt

internal class CryptManager {
    private let publicSalt: String
    
    internal init(publicSalt: String) {
        self.publicSalt = publicSalt
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
        let saltBytes = "\(publicSalt)\(email)".bytes.sha512().prefix(16)
        let seed = Array<UInt8>(saltBytes)
        let salt = Bcrypt.generateSalt(cost: 12, seed: seed)
        
        let digest = (try? Bcrypt.hash(password, salt: salt)) ?? ""
        return digest
    }
}
