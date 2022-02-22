//
//  RegisterViewModel.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import Foundation
import VYou
import RxSwift
import KMPNativeCoroutinesRxSwift

class RegisterViewModel: ObservableObject {
    @Published var model = RegisterModel()
    @Published var showProgressView = false
    @Published var error: NetworkError?
    
    private let disposeBag = DisposeBag()
    
    var signUpDisabled: Bool {
        model.email.isEmpty || !model.termsConditions || !model.privacyPolicy
    }
    
    func sendEmail(completion: @escaping () -> Void) {
        showProgressView = true
        let params = VYouSignUpParams(username: model.email, termsConditions: model.termsConditions, privacyPolicy: model.privacyPolicy, info: model.infoAds)
        let client = VYou.shared.instance()
        
        createSingle(for: client.signUpNative(params: params))
            .subscribe { _ in
                completion()
            } onFailure: { [weak self] error in
                self?.error = NetworkError(errorDescription: error.localizedDescription)
            }
            .disposed(by: disposeBag)

        
    }
}


struct RegisterModel {
    var email: String = ""
    var termsConditions: Bool = false
    var privacyPolicy: Bool = false
    var infoAds: Bool = false
}
