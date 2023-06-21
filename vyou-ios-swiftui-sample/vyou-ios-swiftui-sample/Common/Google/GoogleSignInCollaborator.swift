//
//  GoogleSignInCollaborator.swift
//  
//
//  Created by Ruben on 4/2/22.
//

import GoogleSignIn
import UIKit

class GoogleSignInCollaborator {
    let configuration: GIDConfiguration
    
    init(clientId: String) {
        self.configuration = GIDConfiguration(clientID: clientId)
    }
    
    func signIn(presenting: UIViewController, onFailure: @escaping () -> Void, onSuccess: @escaping (String) -> Void) {
        GIDSignIn.sharedInstance.signIn(with: configuration, presenting: presenting) { user, error in
            guard error == nil, let user = user else {
                onFailure()
                return
            }
            user.authentication.do { authentication, error in
                guard error == nil, let authentication = authentication, let idToken = authentication.idToken else {
                    onFailure()
                    return
                }
                onSuccess(idToken)
            }
        }
    }
    
    func signOut() {
        GIDSignIn.sharedInstance.signOut()
    }
    
    func handle(url: URL) -> Bool {
        return GIDSignIn.sharedInstance.handle(url)
    }
    
}
