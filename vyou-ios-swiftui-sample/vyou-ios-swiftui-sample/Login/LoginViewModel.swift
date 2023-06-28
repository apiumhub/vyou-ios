//
//  LoginViewModel.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 27/1/22.
//

import Foundation
import VYou
import VYouCore
import UIKit
import KMPNativeCoroutinesAsync

class LoginViewModel: ObservableObject {
    @Published var credentials = LoginCredentials()
    @Published var showProgressView = false
    @Published var error: NetworkError?
    
    private var router: Router?
    
    func setup(router: Router) {
        self.router = router
    }
    
    var loginDisabled: Bool {
        credentials.email.isEmpty || credentials.password.isEmpty
    }
    
    func login() async {
        showProgressView = true
        do {
            let provider = VYouSignInProviderKs.userPassword(VYouSignInProvider.UserPassword(username: credentials.email, password: credentials.password))
            VYou.shared.signIn(provider: provider) { [weak self] credentials, _ in
                self?.router?.open(.profile)
            }
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
        showProgressView = false
    }
    
    func loginWithGoogle() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        GoogleService.shared.signIn(presenting: viewController, onFailure: {_ in }) { [weak self] credentials in
            self?.router?.open(.profile)
        }
    }
    
    func loginWithFacebook() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        FacebookService.shared.signIn(presenting: viewController, onFailure: {_ in }) { [weak self] token in
//            let params = VYouSignInPara(accessToken: token)
//            try await asyncFunction(for: VYou.shared.signIn(params: params))
            self?.router?.open(.profile)
        }
    }
}

struct LoginCredentials {
    var email: String = ""
    var password: String = ""
}
