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
import VYouGoogle
import VYouFacebook
import VYouStripe
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
            let params = VYouSignInParams(username: credentials.email, password: credentials.password)
            try await asyncFunction(for: VYou.shared.signIn(params: params))
            router?.open(.profile)
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
        showProgressView = false
    }
    
    func loginWithGoogle() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        VYouGoogle.shared.signIn(presenting: viewController, onFailure: {_ in }) { [weak self] credentials in
            self?.router?.open(.profile)
        }
    }
    
    func loginWithFacebook() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        VYouFacebook.shared.signIn(presenting: viewController, onFailure: {_ in }) { [weak self] credentials in
            self?.router?.open(.profile)
        }
    }
    
    func payAnonymously() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        let params = VYouPaymentParams(amount: 200)
        VYouStripe.shared.createAnonymousPayment(presenting: viewController, params: params, onFailure: { _ in }, onSuccess: { })
    }
}

struct LoginCredentials {
    var email: String = ""
    var password: String = ""
}
