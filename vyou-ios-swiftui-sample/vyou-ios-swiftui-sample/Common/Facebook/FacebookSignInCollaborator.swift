import UIKit
import FacebookLogin

class FacebookSignInCollaborator {
    let manager: LoginManager = FacebookLogin.LoginManager()
    
    func signIn(presenting: UIViewController, onFailure: @escaping () -> Void, onSuccess: @escaping (String) -> Void) {
        manager.logIn(permissions: ["public_profile", "email"], from: presenting) { (loginResult, error) in
            guard error == nil, let result = loginResult, let token = result.token?.tokenString else {
                onFailure()
                return
            }
            onSuccess(token)
        }
    }
    
    func signOut() {
        manager.logOut()
    }
    
    func handle(application: UIApplication, url: URL) -> Bool {
        return ApplicationDelegate.shared.application(application, open: url)
    }
    
    func didFinishLaunchingWithOptions(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]?) -> Bool {
        return ApplicationDelegate.shared.application(application, didFinishLaunchingWithOptions: launchOptions)
    }
}
