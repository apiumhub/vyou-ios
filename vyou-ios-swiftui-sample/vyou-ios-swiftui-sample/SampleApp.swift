//
//  vyou_ios_swiftui_sampleApp.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 26/1/22.
//


import SwiftUI
import VYou
import VYouGoogle
import VYouFacebook

@main
struct SampleApp: App {
    @StateObject var router = Router()
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate
    
    init() {
        let serverUrl = ProcessInfo.processInfo.environment["SERVER_URL"] ?? ""
        let clientId = ProcessInfo.processInfo.environment["CLIENT_ID"] ?? ""
        let googleId = ProcessInfo.processInfo.environment["GOOGLE_CLIENT_ID"] ?? ""
        let serverGoogleId = ProcessInfo.processInfo.environment["GOOGLE_VYOU_ID"] ?? ""

        VYou.Builder(serverUrl: serverUrl, clientId: clientId)
            .enableNetworkLogs(level: VYouLogLevel.all)
            .addOnSignOut {
                try? VYouGoogle.instance().signOut()
                try? VYouFacebook.instance().signOut()
            }
            .initialize()
        
        VYouGoogle.Builder(clientId: googleId, serverClientId: serverGoogleId).initialize()
        VYouFacebook.Builder().initialize()
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
