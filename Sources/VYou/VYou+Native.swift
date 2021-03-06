//
//  File.swift
//  
//
//  Created by Ruben on 15/2/22.
//

import Foundation
import VYouCore

extension VYou {
    public func signIn(params: VYouSignInParams) -> (@escaping (VYouCredentials, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signInNative(params: params.doCopy(username: params.username, password: cryptManager.encryptPassword(email: params.username, password: params.password)), pkce: cryptManager.generatePKCE())
    }
    
    public func signInGoogle(params: VYouSignInSocialParams) -> (@escaping (VYouCredentials, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signInGoogleNative(params: params)
    }
    
    public func signInApple(params: VYouSignInSocialParams) -> (@escaping (VYouCredentials, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signInAppleNative(params: params)
    }
    
    public func signInFacebook(params: VYouSignInSocialParams) -> (@escaping (VYouCredentials, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signInFacebookNative(params: params)
    }
    
    public func signUp(params: VYouSignUpParams) -> (@escaping (KotlinUnit, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signUpNative(params: params)
    }
    
    public func signUpVerify(params: VYouSignUpVerifyParams) -> (@escaping (KotlinUnit, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signUpVerifyNative(params: params)
    }
    
    public func signUpPassword(params: VYouSignUpPasswordParams) -> (@escaping (KotlinUnit, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        let password = params.password
        let encryptedPassword = cryptManager.encryptPassword(email: client.getEmail(), password: password)
        return client.signUpPasswordsNative(encryptedPassword: encryptedPassword)
    }
    
    public func signOut() -> (@escaping (KotlinUnit, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.signOutNative()
    }
    
    public func resetPassword(params: VYouResetPasswordParams) -> (@escaping (KotlinUnit, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.resetPasswordNative(params: params)
    }
    
    public func refreshToken() -> (@escaping (VYouCredentials, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.refreshTokenNative()
    }
    
    public func getProfile() -> (@escaping (VYouProfile, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.getProfileNative()
    }
    
    public func editProfile(params: VYouEditProfileParams) -> (@escaping (VYouProfile, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.editProfileNative(params: params)
    }
    
    public func createPayment(params: VYouPaymentParams) -> (@escaping (String, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.createPaymentNative(params: params)
    }
    
    public func createAnonymousPayment(params: VYouPaymentParams) -> (@escaping (String, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.createAnonymousPaymentNative(params: params)
    }
    
    public func subscriptionProducts() -> (@escaping ([VYouProduct], KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.subscriptionProductsNative()
    }
    
    public func createSubscription(params: VYouSubscriptionParams) -> (@escaping (String, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.createSubscriptionNative(params: params)
    }
    
    public func mySubscriptions() -> (@escaping ([VYouSubscription], KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.mySubscriptionsNative()
    }
    
    public func cancelSubscription(params: VYouSubscriptionCancelParams) -> (@escaping (KotlinUnit, KotlinUnit) -> KotlinUnit, @escaping (Error, KotlinUnit) -> KotlinUnit) -> () -> KotlinUnit {
        return client.cancelSubscriptionNative(params: params)
    }
}
