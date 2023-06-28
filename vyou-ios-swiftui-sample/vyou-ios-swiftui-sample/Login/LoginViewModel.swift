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
        await login(provider: VYouSignInProviderKs.userPassword(VYouSignInProvider.UserPassword(username: credentials.email, password: credentials.password)))
        showProgressView = false
    }
    
    func loginWithGoogle() async {
        guard let viewController = await (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        do {
            let token = try await GoogleService.shared.signIn(presenting: viewController)
            await login(provider: VYouSignInProviderKs.google(VYouSignInProvider.Google(accessToken: token)))
        } catch {
            
        }
    }
    
    func loginWithFacebook() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        FacebookService.shared.signIn(presenting: viewController, onFailure: {_ in }) { [unowned self] token in
            Task { await self.login(provider: VYouSignInProviderKs.facebook(VYouSignInProvider.Facebook(accessToken: token))) }
        }
    }
    
    func loginWithApple() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        AppleService.shared.signIn(presenting: viewController, onFailure: {_ in }) { [unowned self] token in
            Task { await self.login(provider: VYouSignInProviderKs.apple(VYouSignInProvider.Apple(accessToken: token))) }
        }
    }
    
    private func login(provider: VYouSignInProviderKs) async {
        do {
            try await VYou.shared.signIn(provider: provider)
            router?.open(.profile)
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
    }
}

struct LoginCredentials {
    var email: String = ""
    var password: String = ""
}
