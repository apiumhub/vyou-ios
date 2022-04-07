//
//  ContentView.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 26/1/22.
//

import SwiftUI

struct LoginView: View {
    @StateObject private var loginVM = LoginViewModel()
    @EnvironmentObject private var router: Router
    
    var body: some View {
        VStack(alignment: .leading) {
            Text("Login").font(.largeTitle)
            TextField("Email", text: $loginVM.credentials.email)
                .keyboardType(.emailAddress)
            SecureField("Password", text: $loginVM.credentials.password)
            if(loginVM.showProgressView) {
                ProgressView()
            }
            Button("Did you forget your password?") {
                router.open(.forgotPassword)
            }
            .padding(.bottom, 20)
            Button("Log in") {
                loginVM.login {
                    router.open(.profile)
                }
            }
            .disabled(loginVM.loginDisabled)
            .padding(.bottom, 20)
            Divider()
            .padding(.bottom, 20)
            VStack {
                Button("Log in with Google") {
                    loginVM.loginWithGoogle() {
                        router.open(.profile)
                    }
                }
                .padding(.bottom, 20)
                Divider()
                .padding(.bottom, 20)
                Button("Log in with Facebook") {
                    loginVM.loginWithFacebook() {
                        router.open(.profile)
                    }
                }
                .padding(.bottom, 20)
                Divider()
                .padding(.bottom, 20)
                Button("Pay anonymously") {
                    loginVM.payAnonymously()
                }
                .padding(.bottom, 20)
            }
            Spacer()
        }
        .textInputAutocapitalization(.none)
        .textFieldStyle(RoundedBorderTextFieldStyle())
        .padding()
        .disabled(loginVM.showProgressView)
        .alert(item: $loginVM.error) { error in
            Alert(title: Text("Invalid Login"), message: Text(error.localizedDescription))
        }
        Button("Create an account") {
            router.cleanOpen(.register)
        }
        .padding(.bottom, 20)
    }
}

struct LoginView_Previews: PreviewProvider {
    static var previews: some View {
        LoginView()
    }
}
