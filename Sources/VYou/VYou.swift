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
