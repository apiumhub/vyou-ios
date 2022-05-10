//
//  ProfileViewModel.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import Foundation
import VYou
import VYouCore
import SwiftUI
import VYouStripe
import KMPNativeCoroutinesAsync

class ProfileViewModel: ObservableObject {
    
    private var router: Router?
    
    func setup(router: Router) {
        self.router = router
    }
    
    func logOut() async {
        try? await asyncFunction(for: VYou.shared.signOut())
        router?.cleanOpen(.login)
    }
    
    func pay() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        let params = VYouPaymentParams(amount: 400)
        VYouStripe.shared.createPayment(presenting: viewController, params: params, onFailure: { _ in }) { }
    }
}
