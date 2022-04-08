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
import RxSwift
import KMPNativeCoroutinesRxSwift
import VYouGoogle
import VYouFacebook
import VYouStripe

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
        createSingle(for: VYou.shared.signIn(params: params))
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
        
        VYouGoogle.shared.signIn(presenting: viewController, onFailure: {_ in }) { credentials in
            completion()
        }
    }
    
    func loginWithFacebook(completion: @escaping () -> Void) {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        VYouFacebook.shared.signIn(presenting: viewController, onFailure: {_ in }) { credentials in
            completion()
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
