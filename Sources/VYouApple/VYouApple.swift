import VYouCore
import VYou
import UIKit

public final class VYouApple {
    private let name = "VYouApple"
    private let collaborator: AppleSignInCollaborator
    
    public static var shared: VYouApple!
    
    private init() {
        collaborator = AppleSignInCollaborator()
    }
    
    public func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (VYouCredentials) -> Void) {
        collaborator.signIn(presenting: presenting, onFailure: {
            onFailure(VYouAppleError.socialImplementation)
        }) { token in
            let params = VYouSignInSocialParams(accessToken: token)
                                    
            VYou.shared.signInApple(params: params) { credentials, error in
                if let error = error {
                    onFailure(error)
                    return
                }
                guard let credentials = credentials else {
                    onFailure(VYouAppleError.invalidCredentials)
                    return
                }
                onSuccess(credentials)
            }
        }
    }
    
    public class Builder {
        public init() {}
        
        public func build() {
            VYouApple.shared = VYouApple()
        }
    }
}

public enum VYouAppleError: Error {
    case initialize
    case socialImplementation
    case invalidCredentials
}
