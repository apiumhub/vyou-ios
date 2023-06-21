import UIKit

public final class FacebookService {
    private let name = "FacebookService"
    private let collaborator: FacebookSignInCollaborator
    
    public static var shared: FacebookService!
    
    private init() {
        collaborator = FacebookSignInCollaborator()
    }
    
    public func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (String) -> Void) {
        collaborator.signIn(presenting: presenting, onFailure: {
            onFailure(FacebookError.socialImplementation)
        }) { token in
            onSuccess(token)
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
            FacebookService.shared = FacebookService()
        }
    }
}


enum FacebookError: Error {
    case initialize
    case socialImplementation
    case invalidCredentials
}
