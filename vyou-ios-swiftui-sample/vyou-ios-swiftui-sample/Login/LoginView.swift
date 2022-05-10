//
//  ContentView.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 26/1/22.
//

import SwiftUI

struct LoginView: View {
    @StateObject private var viewModel = LoginViewModel()
    @EnvironmentObject private var router: Router
    
    var body: some View {
        VStack(alignment: .leading) {
            Text("Login").font(.largeTitle)
            TextField("Email", text: $viewModel.credentials.email)
                .keyboardType(.emailAddress)
            SecureField("Password", text: $viewModel.credentials.password)
            if(viewModel.showProgressView) {
                ProgressView()
            }
            Button("Did you forget your password?") {
                router.open(.forgotPassword)
            }
            .padding(.bottom, 20)
            Button("Log in") {
                Task { await viewModel.login() }
            }
            .disabled(viewModel.loginDisabled)
            .padding(.bottom, 20)
            Divider()
            .padding(.bottom, 20)
            VStack {
                Button("Log in with Google") {
                    viewModel.loginWithGoogle()
                }
                .padding(.bottom, 20)
                Divider()
                .padding(.bottom, 20)
                Button("Log in with Facebook") {
                    viewModel.loginWithFacebook()
                }
                .padding(.bottom, 20)
                Divider()
                .padding(.bottom, 20)
                Button("Pay anonymously") {
                    viewModel.payAnonymously()
                }
                .padding(.bottom, 20)
            }
            Spacer()
        }
        .textInputAutocapitalization(.none)
        .textFieldStyle(RoundedBorderTextFieldStyle())
        .padding()
        .disabled(viewModel.showProgressView)
        .alert(item: $viewModel.error) { error in
            Alert(title: Text("Invalid Login"), message: Text(error.localizedDescription))
        }
        Button("Create an account") {
            router.cleanOpen(.register)
        }
        .padding(.bottom, 20)
        .onAppear {
            viewModel.setup(router: router)
        }
    }
}

struct LoginView_Previews: PreviewProvider {
    static var previews: some View {
        LoginView()
    }
}
