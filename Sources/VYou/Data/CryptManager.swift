import CommonCrypto
import CryptoSwift
import Foundation
import VYouCore
import Vapor
import CBcrypt

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
        let salt = generateSalt(cost: 12, seed: seed)
        
        let digest = (try? Bcrypt.hash(password, salt: salt)) ?? ""
        return digest
    }
    
    private func generateSalt(cost: Int, seed: [UInt8]) -> String {
        let encodedSalt = base64Encode(seed)
        return "$2b$12$\(encodedSalt)"
    }
    
    private func base64Encode(_ data: [UInt8]) -> String {
        let encodedBytes = UnsafeMutablePointer<Int8>.allocate(capacity: 25)
        defer { encodedBytes.deallocate() }
        let res = data.withUnsafeBytes { bytes in
            encode_base64(encodedBytes, bytes.baseAddress?.assumingMemoryBound(to: UInt8.self), bytes.count)
        }
        assert(res == 0, "base64 convert failed")
        return String(cString: encodedBytes)
    }
}
