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
                Divider()
                .padding(.bottom, 20)
                Button("Pay") {
                    profileVM.pay()
                }
                .padding(.bottom, 20)
                Divider()
                .padding(.bottom, 20)
                Button("Show products") {
                    router.open(.products)
                }
                .padding(.bottom, 20)
                Divider()
                .padding(.bottom, 20)
                Button("My subscriptions") {
                    router.open(.subscriptions)
                }
                .padding(.bottom, 20)
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
