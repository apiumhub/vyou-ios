import VYou
import UIKit

public final class VYouFacebook {
    private let name = "VYouFacebook"
    private let collaborator: FacebookSignInCollaborator
    
    public static var shared: VYouFacebook!
    
    private init() {
        collaborator = FacebookSignInCollaborator()
    }
    
    public func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (VYouCredentials) -> Void) {
        collaborator.signIn(presenting: presenting, onFailure: {
            onFailure(VYouFacebookError.socialImplementation)
        }) { token in
            let params = VYouSignInSocialParams(accessToken: token)
            
            VYou.shared.signInFacebook(params: params) { credentials, error in
                if let error = error {
                    onFailure(error)
                    return
                }
                guard let credentials = credentials else {
                    onFailure(VYouFacebookError.invalidCredentials)
                    return
                }
                onSuccess(credentials)
            }
        }
    }
    
    public func signOut() {
        collaborator.signOut()
    }
    
    public func handle(application: UIApplication, url: URL) -> Bool {
        return collaborator.handle(application: application, url: url)
    }
    
    public func didFinishLaunchingWithOptions(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        return collaborator.didFinishLaunchingWithOptions(application: application, didFinishLaunchingWithOptions: launchOptions)
    }
    
    public class Builder {

        public init() {}
        
        public func build() {
            VYouFacebook.shared = VYouFacebook()
        }
    }
}


enum VYouFacebookError: Error {
    case initialize
    case socialImplementation
    case invalidCredentials
}
