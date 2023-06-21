import UIKit

public final class AppleService {
    private let name = "AppleService"
    private let collaborator: AppleSignInCollaborator
    
    public static var shared: AppleService!
    
    private init() {
        collaborator = AppleSignInCollaborator()
    }
    
    public func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (String) -> Void) {
        collaborator.signIn(presenting: presenting, onFailure: {
            onFailure(AppleError.socialImplementation)
        }) { token in
            onSuccess(token)
        }
    }
    
    public class Builder {
        public init() {}
        
        public func build() {
            AppleService.shared = AppleService()
        }
    }
}

public enum AppleError: Error {
    case initialize
    case socialImplementation
    case invalidCredentials
}
