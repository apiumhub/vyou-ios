//
//  RegisterView.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import SwiftUI

struct RegisterView: View {
    @StateObject private var viewModel = RegisterViewModel()
    @EnvironmentObject private var router: Router
    
    var body: some View {
        VStack(alignment: .leading) {
            Text("Register").font(.largeTitle)
            TextField("Email", text: $viewModel.model.email)
                .keyboardType(.emailAddress)
            Checkbox(checked: $viewModel.model.termsConditions, text: "Accept terms and conditions")
                .padding(.bottom, 10)
            Checkbox(checked: $viewModel.model.privacyPolicy, text: "Accept privacy policy")
                .padding(.bottom, 10)
            Checkbox(checked: $viewModel.model.infoAds, text: "Accept info and ads")
                .padding(.bottom, 20)
            if(viewModel.showProgressView) {
                ProgressView()
            }
            Button("Sign up") {
                Task { await viewModel.sendEmail() }
            }
            .disabled(viewModel.signUpDisabled)
            .padding(.bottom, 20)
            Spacer()
        }
        .textInputAutocapitalization(.none)
        .textFieldStyle(RoundedBorderTextFieldStyle())
        .padding()
        .disabled(viewModel.showProgressView)
        .alert(item: $viewModel.error) { error in
            Alert(title: Text("Invalid Register"), message: Text(error.localizedDescription))
        }
        Button("Do you have an account? Log in") {
            router.cleanOpen(.login)
        }
        .padding(.bottom, 20)
        .onAppear {
            viewModel.setup(router: router)
        }
    }
}
