//
//  GoogleSignInCollaborator.swift
//  
//
//  Created by Ruben on 4/2/22.
//

import GoogleSignIn
import UIKit

class GoogleSignInCollaborator {
    init(clientId: String) {
        GIDSignIn.sharedInstance.configuration = GIDConfiguration(clientID: clientId)
    }
    
    func signIn(presenting: UIViewController) async throws -> String {
        let result = try await GIDSignIn.sharedInstance.signIn(withPresenting: presenting)
        return result.user.idToken?.tokenString ?? ""
    }
    
    func signOut() {
        GIDSignIn.sharedInstance.signOut()
    }
    
    func handle(url: URL) -> Bool {
        return GIDSignIn.sharedInstance.handle(url)
    }
}
