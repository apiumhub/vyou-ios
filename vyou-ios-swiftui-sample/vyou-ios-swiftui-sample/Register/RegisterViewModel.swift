//
//  RegisterViewModel.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import Foundation
import VYou
import VYouCore
import KMPNativeCoroutinesAsync

class RegisterViewModel: ObservableObject {
    @Published var model = RegisterModel()
    @Published var showProgressView = false
    @Published var error: NetworkError?
    
    private var router: Router? = nil
    
    func setup(router: Router) {
        self.router = router
    }
    
    var signUpDisabled: Bool {
        model.email.isEmpty || !model.termsConditions || !model.privacyPolicy
    }
    
    @MainActor
    func sendEmail() async {
        showProgressView = true
        do {
            let params = VYouSignUpParams(username: model.email, termsConditions: model.termsConditions, privacyPolicy: model.privacyPolicy, info: model.infoAds)
            try await VYou.shared.signUp(params: params)
            router?.open(.profile)
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
        showProgressView = false
    }
}


struct RegisterModel {
    var email: String = ""
    var termsConditions: Bool = false
    var privacyPolicy: Bool = false
    var infoAds: Bool = false
}
