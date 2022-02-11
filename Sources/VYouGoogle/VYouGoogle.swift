import VYou
import UIKit

public final class VYouGoogle {
    private let collaborator: GoogleSignInCollaborator
    
    public static var shared: VYouGoogle!
    
    private init(clientId: String) {
        collaborator = GoogleSignInCollaborator(clientId: clientId)
    }
    
    public func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (VYouCredentials) -> Void) {
        collaborator.signIn(presenting: presenting, onFailure: {
            onFailure(VYouGoogleError.socialImplementation)
        }) { token in
            let params = VYouSignInSocialParams(accessToken: token)
            VYou.shared.signInGoogle(params: params) { credentials, error in
                if let error = error {
                    onFailure(error)
                    return
                }
                guard let credentials = credentials else {
                    onFailure(VYouGoogleError.invalidCredentials)
                    return
                }
                onSuccess(credentials)
            }
        }
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
            VYouGoogle.shared = VYouGoogle(clientId: clientId)
        }
    }
}


enum VYouGoogleError: Error {
    case initialize
    case socialImplementation
    case invalidCredentials
}
