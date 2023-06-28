//
//  File.swift
//
//
//  Created by Ruben on 15/2/22.
//

import Foundation
import VYouCore
import KMPNativeCoroutinesCore
import KMPNativeCoroutinesAsync

extension VYou {
    public func signIn(provider: VYouSignInProviderKs) async throws -> VYouCredentials {
        switch provider {
        case .userPassword(let params):
            return try await asyncFunction(for: client.signIn(params: params, pkce: cryptManager.generatePKCE()))
        case .google(let params):
            return try await asyncFunction(for: client.signInGoogle(params: params))
        case .facebook(let params):
            return try await asyncFunction(for: client.signInFacebook(params: params))
        case .apple(let params):
            return try await asyncFunction(for: client.signInApple(params: params))
        }
    }
    
    public func signUp(params: VYouSignUpParams) async throws -> KotlinUnit {
        return try await asyncFunction(for: client.signUp(params: params))
    }
    
    public func signUpVerify(params: VYouSignUpVerifyParams) async throws -> KotlinUnit {
        return try await asyncFunction(for: client.signUpVerify(params: params))
    }
    
    public func signUpPassword(params: VYouSignUpPasswordParams) async throws -> KotlinUnit {
        let password = params.password
        let encryptedPassword = cryptManager.encryptPassword(email: client.getEmail(), password: password)
        return try await asyncFunction(for: client.signUpPasswords(encryptedPassword: encryptedPassword))
    }
    
    public func signOut() async throws -> KotlinUnit {
        return try await asyncFunction(for: client.signOut())
    }
    
    public func resetPassword(params: VYouResetPasswordParams) async throws -> KotlinUnit {
        return try await asyncFunction(for: client.resetPassword(params: params))
    }
    
    public func refreshToken() async throws -> VYouCredentials {
        return try await asyncFunction(for: client.refreshToken())
    }
    
    public func getProfile() async throws -> VYouProfile {
        return try await asyncFunction(for: client.getProfile())
    }
    
    public func editProfile(params: VYouEditProfileParams) async throws -> VYouProfile {
        return try await asyncFunction(for: client.editProfile(params: params))
    }
}
