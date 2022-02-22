//
//  ProfileView.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 27/1/22.
//

import Foundation
import SwiftUI

struct ProfileView: View {
    @StateObject private var profileVM = ProfileViewModel()
    @EnvironmentObject private var router: Router
    
    var body: some View {
        NavigationView {
            VStack {
                Text("Authorized")
            }
            .padding()
            .navigationTitle("Profile")
            .toolbar {
                ToolbarItem(placement: .navigationBarTrailing) {
                    Button("Log out") {
                        profileVM.logOut {
                            router.cleanOpen(.login)
                        }
                    }
                }
            }
        }
        
    }
}
