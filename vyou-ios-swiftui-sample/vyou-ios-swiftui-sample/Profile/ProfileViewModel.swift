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
import KMPNativeCoroutinesRxSwift
import RxSwift
import VYouStripe

class ProfileViewModel: ObservableObject {
    
    private let disposeBag = DisposeBag()
    
    func logOut(completion: @escaping () -> Void) {
        
        createSingle(for: VYou.shared.signOut())
            .subscribe(onSuccess: { _ in
                completion()
            }, onFailure: { error in
                completion()
            })
            .disposed(by: disposeBag)

    }
    
    func pay() {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        let params = VYouPaymentParams(amount: 400)
        VYouStripe.shared.createPayment(presenting: viewController, params: params, onFailure: { _ in }) { _ in }
    }
}
