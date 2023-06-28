//
//  vyou_ios_swiftui_sampleApp.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 26/1/22.
//


import SwiftUI
import VYou

@main
struct SampleApp: App {
    @StateObject var router = Router()
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    
    init() {
        let clientId = ProcessInfo.processInfo.environment["CLIENT_ID"] ?? ""
        let serverUrl = ProcessInfo.processInfo.environment["SERVER_URL"] ?? ""
        let publicSalt = ProcessInfo.processInfo.environment["PUBLIC_SALT"] ?? ""
        let googleId = ProcessInfo.processInfo.environment["GOOGLE_CLIENT_ID"] ?? ""
                
        VYou.Builder(clientId: clientId, serverUrl: serverUrl, publicSaltBase64: publicSalt)
            .enableNetworkLogs(level: .all)
            .addOnSignOut {
                GoogleService.shared.signOut()
                FacebookService.shared.signOut()
            }
            .build()
        
        GoogleService.Builder(clientId: googleId).build()
        FacebookService.Builder().build()
    }
    
    var body: some Scene {
        WindowGroup {
            switch router.screen {
            case .login: LoginView().environmentObject(router)
            case .forgotPassword: LoginView()
            case .register: RegisterView().environmentObject(router)
            case .profile: ProfileView().environmentObject(router)
            }
        }
    }
}
