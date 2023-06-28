import UIKit

public final class GoogleService {
    private let collaborator: GoogleSignInCollaborator
    
    public static var shared: GoogleService!
    
    private init(clientId: String) {
        collaborator = GoogleSignInCollaborator(clientId: clientId)
    }
    
    public func signIn(presenting: UIViewController) async throws -> String {
        try await collaborator.signIn(presenting: presenting)
    }
    
    public func signOut() {
        collaborator.signOut()
    }
    
    public func handle(url: URL) -> Bool {
        return collaborator.handle(url: url)
    }
    
    public class Builder {
        let clientId: String
        
        public init(clientId: String) {
            self.clientId = clientId
        }
        
        public func build() {
            GoogleService.shared = GoogleService(clientId: clientId)
        }
    }
}


enum GoogleError: Error {
    case initialize
    case socialImplementation
    case invalidCredentials
}
