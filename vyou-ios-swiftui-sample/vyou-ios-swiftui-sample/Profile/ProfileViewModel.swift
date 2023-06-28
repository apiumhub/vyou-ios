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

class ProfileViewModel: ObservableObject {
    
    private var router: Router?
    
    func setup(router: Router) {
        self.router = router
    }
    
    func logOut() async {
        try? await VYou.shared.signOut()
        router?.cleanOpen(.login)
    }
}
