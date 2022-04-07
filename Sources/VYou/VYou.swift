//
//  File.swift
//  
//
//  Created by Ruben on 15/2/22.
//

import Foundation
import VYouCore

public final class VYou {
    internal let client: VYouClient
    internal let cryptManager: CryptManager
    public static var shared: VYou!
    
    private init(client: VYouClient, cryptManager: CryptManager) {
        self.client = client
        self.cryptManager = cryptManager
    }
    
    public func isLoggedIn() -> Bool { return client.isLoggedIn() }
    public func credentials() throws -> VYouCredentials { return try client.credentials() }
    public func isValidToken() -> Bool { return client.isValidToken() }
    public func accessToken() -> String { return client.getAccessToken() }
    public func tokenType() -> String{ return client.getTokenType() }
    
    public func signIn(params: VYouSignInParams, completionHandler: @escaping (VYouCredentials?, Error?) -> Void) {
        return client.signIn(params: params.doCopy(username: params.username, password: cryptManager.encryptPassword(email: params.username, password: params.password)), pkce: cryptManager.generatePKCE(), completionHandler: completionHandler)
    }
    
    public func signInGoogle(params: VYouSignInSocialParams, completionHandler: @escaping (VYouCredentials?, Error?) -> Void) {
        client.signInGoogle(params: params, completionHandler: completionHandler)
    }
    
    public func signInApple(params: VYouSignInSocialParams, completionHandler: @escaping (VYouCredentials?, Error?) -> Void) {
        client.signInApple(params: params, completionHandler: completionHandler)
    }
    
    public func signInFacebook(params: VYouSignInSocialParams, completionHandler: @escaping (VYouCredentials?, Error?) -> Void) {
        client.signInFacebook(params: params, completionHandler: completionHandler)
    }
    
    public func signUp(params: VYouSignUpParams, completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        client.signUp(params: params, completionHandler: completionHandler)
    }
    
    public func signUpVerify(params: VYouSignUpVerifyParams, completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        client.signUpVerify(params: params, completionHandler: completionHandler)
    }
    
    public func signUpPassword(params: VYouSignUpPasswordParams, completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        let password = params.password
        let encryptedPassword = cryptManager.encryptPassword(email: client.getEmail(), password: password)
        client.signUpPasswords(encryptedPassword: encryptedPassword, completionHandler: completionHandler)
    }
    
    public func signOut(completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        client.signOut(completionHandler: completionHandler)
    }
    
    public func resetPassword(params: VYouResetPasswordParams, completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        client.resetPassword(params: params, completionHandler: completionHandler)
    }
    
    public func refreshToken(completionHandler: @escaping (VYouCredentials?, Error?) -> Void) {
        client.refreshToken(completionHandler: completionHandler)
    }
    
    public func getProfile(completionHandler: @escaping (VYouProfile?, Error?) -> Void) {
        client.getProfile(completionHandler: completionHandler)
    }
    
    public func editProfile(params: VYouEditProfileParams, completionHandler: @escaping (VYouProfile?, Error?) -> Void) {
        client.editProfile(params: params, completionHandler: completionHandler)
    }
    
    public func createPayment(params: VYouPaymentParams, completionHandler: @escaping (String?, Error?) -> Void) {
        client.createPayment(params: params, completionHandler: completionHandler)
    }
    
    public func createAnonymousPayment(params: VYouPaymentParams, completionHandler: @escaping (String?, Error?) -> Void) {
        client.createAnonymousPayment(params: params, completionHandler: completionHandler)
    }
    
    public func subscriptionProducts(completionHandler: @escaping ([VYouProduct]?, Error?) -> Void) {
        client.subscriptionProducts(completionHandler: completionHandler)
    }
    
    public func createSubscription(params: VYouSubscriptionParams, completionHandler: @escaping (String?, Error?) -> Void) {
        client.createSubscription(params: params, completionHandler: completionHandler)
    }
    
    public func mySubscriptions(completionHandler: @escaping ([VYouSubscription]?, Error?) -> Void) {
        client.mySubscriptions(completionHandler: completionHandler)
    }
    
    public func cancelSubscription(params: VYouSubscriptionCancelParams, completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        client.cancelSubscription(params: params, completionHandler: completionHandler)
    }
    
    
    public class Builder {
        let clientId: String
        let serverUrl: String
        let publicSaltBase64: String
        var networkLogLevel: VYouLogLevel = .none
        var onRefreshTokenFailure: (VYouError) -> Void = {_ in }
        var onSignOut: () -> Void = {}
        
        public init(clientId: String, serverUrl: String, publicSaltBase64: String) {
            self.clientId = clientId
            self.serverUrl = serverUrl
            self.publicSaltBase64 = publicSaltBase64
        }
        
        public func enableNetworkLogs(level: VYouLogLevel) -> Builder {
            networkLogLevel = level
            return self
        }
        
        public func addOnRefreshTokenFailure(block: @escaping (VYouError) -> Void) -> Builder {
            onRefreshTokenFailure = block
            return self
        }
        
        public func addOnSignOut(block: @escaping () -> Void) -> Builder {
            onSignOut = block
            return self
        }
        
        public func build() {
            shared = VYou(client: VYouClient(clientId: clientId, serverUrl: serverUrl, networkLogLevel: networkLogLevel, onRefreshTokenFailure: onRefreshTokenFailure, onSignOut: onSignOut), cryptManager: CryptManager(publicSaltBase64: publicSaltBase64))
        }
    }
    
}
