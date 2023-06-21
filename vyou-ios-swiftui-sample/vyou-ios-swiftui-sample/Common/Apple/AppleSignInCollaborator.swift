import Foundation
import AuthenticationServices

class AppleSignInCollaborator: NSObject, ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding  {
    
    var viewController: UIViewController?
    var requestState: String?
    var requestNonce: String?
    
    var onFailure: () -> Void = {}
    var onSuccess: (String) -> Void = {_ in }
    
    func signIn(presenting: UIViewController, onFailure: @escaping () -> Void, onSuccess: @escaping (String) -> Void) {
        self.onFailure = onFailure
        self.onSuccess = onSuccess
        viewController = presenting
        
        let request = ASAuthorizationAppleIDProvider().createRequest()
        request.requestedScopes = [.fullName, .email]
        
        requestState = generateBlobString()
        request.state = requestState
        
        requestNonce = generateBlobString()
        request.nonce = requestNonce
        
        let controller = ASAuthorizationController(authorizationRequests: [request])
        controller.delegate = self
        controller.presentationContextProvider = self
        controller.performRequests()
    }
    
    func presentationAnchor(for controller: ASAuthorizationController) -> ASPresentationAnchor {
        return viewController!.view.window!
    }
    
    func authorizationController(controller: ASAuthorizationController, didCompleteWithAuthorization authorization: ASAuthorization) {
        if let credential = authorization.credential as? ASAuthorizationAppleIDCredential,
            let token = credential.identityToken,
            let idTokenString = String(data: token, encoding: .utf8),
//            let authCode = credential.authorizationCode,
//            let authCodeString = String(data: authCode, encoding: .utf8),
            let requestState = requestState {
            
            guard credential.state == requestState  else {
                onFailure()
                return
            }
            onSuccess(idTokenString)
            
            self.requestState = nil
            self.requestNonce = nil
        } else {
            onFailure()
        }
    }
    
    func authorizationController(controller: ASAuthorizationController, didCompleteWithError error: Error) {
        self.requestState = nil
        self.requestNonce = nil
        onFailure()
    }
    
    private func generateBlobString() -> String {
        let alphabet = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
        var nonce: String = ""
        for _ in 0..<16 {
            nonce += String(alphabet.randomElement()!)
        }
        return nonce
    }
}


