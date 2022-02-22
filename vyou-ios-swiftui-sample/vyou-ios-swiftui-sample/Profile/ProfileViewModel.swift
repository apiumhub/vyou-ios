//
//  ProfileViewModel.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import Foundation
import VYou
import SwiftUI
import KMPNativeCoroutinesRxSwift
import RxSwift

class ProfileViewModel: ObservableObject {
    
    private let disposeBag = DisposeBag()
    
    func logOut(completion: @escaping () -> Void) {
        let client = VYou.shared.instance()
        
        createSingle(for: client.signOutNative())
            .subscribe { _ in
                completion()
            } onFailure: { error in
                completion()
            }
            .disposed(by: disposeBag)

    }
}
