//
//  LoginViewModel.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 27/1/22.
//

import Foundation
import VYou
import UIKit
import RxSwift
import KMPNativeCoroutinesRxSwift
import VYouGoogle
import VYouFacebook

class LoginViewModel: ObservableObject {
    @Published var credentials = LoginCredentials()
    @Published var showProgressView = false
    @Published var error: NetworkError?
    
    private let disposeBag = DisposeBag()
    
    var loginDisabled: Bool {
        credentials.email.isEmpty || credentials.password.isEmpty
    }
    
    func login(completion: @escaping () -> Void) {
        showProgressView = true
        let params = VYouSignInParams(username: credentials.email, password: credentials.password)
        let client = VYou.shared.instance()
        createSingle(for: client.signInNative(params: params))
            .subscribe { [weak self] credentials in
                self?.showProgressView = false
                completion()
            } onFailure: { [weak self] error in
                self?.showProgressView = false
                self?.error = NetworkError(errorDescription: error.localizedDescription)
            }
            .disposed(by: disposeBag)
    }
    
    func loginWithGoogle(completion: @escaping () -> Void) {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        guard let vYouGoogle = try? VYouGoogle.instance() else { return }
        vYouGoogle.signIn(presenting: viewController) { credentials in
            completion()
        }
    }
    
    func loginWithFacebook(completion: @escaping () -> Void) {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        guard let vYouFacebook = try? VYouFacebook.instance() else { return }
        vYouFacebook.signIn(presenting: viewController) { credentials in
            completion()
        }
    }
}

struct LoginCredentials {
    var email: String = ""
    var password: String = ""
}