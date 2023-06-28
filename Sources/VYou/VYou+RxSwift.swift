//
//  File.swift
//
//
//  Created by Ruben on 15/2/22.
//

import Foundation
import VYouCore
import KMPNativeCoroutinesCore
import RxSwift
import KMPNativeCoroutinesRxSwift

extension VYou {
    public func signIn(provider: VYouSignInProviderKs) -> Single<VYouCredentials> {
        switch provider {
        case .userPassword(let params):
            return createSingle(for: client.signIn(params: params, pkce: cryptManager.generatePKCE()))
        case .google(let params):
            return createSingle(for: client.signInGoogle(params: params))
        case .facebook(let params):
            return createSingle(for: client.signInFacebook(params: params))
        case .apple(let params):
            return createSingle(for: client.signInApple(params: params))
        }
    }
    
    public func signUp(params: VYouSignUpParams) -> Completable {
        return createSingle(for: client.signUp(params: params)).asCompletable()
    }
    
    public func signUpVerify(params: VYouSignUpVerifyParams) -> Completable {
        return createSingle(for: client.signUpVerify(params: params)).asCompletable()
    }
    
    public func signUpPassword(params: VYouSignUpPasswordParams) -> Completable {
        let password = params.password
        let encryptedPassword = cryptManager.encryptPassword(email: client.getEmail(), password: password)
        return createSingle(for: client.signUpPasswords(encryptedPassword: encryptedPassword)).asCompletable()
    }
    
    public func signOut() -> Completable {
        return createSingle(for: client.signOut()).asCompletable()
    }
    
    public func resetPassword(params: VYouResetPasswordParams) -> Completable {
        return createSingle(for: client.resetPassword(params: params)).asCompletable()
    }
    
    public func refreshToken() -> Single<VYouCredentials> {
        return createSingle(for: client.refreshToken())
    }
    
    public func getProfile() -> Single<VYouProfile> {
        return createSingle(for: client.getProfile())
    }
    
    public func editProfile(params: VYouEditProfileParams) -> Single<VYouProfile> {
        return createSingle(for: client.editProfile(params: params))
    }
}
