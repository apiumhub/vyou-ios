//
//  AppDelegate.swift
//  vyou-ios-ui-sample
//
//  Created by Ruben on 7/2/22.
//

import UIKit
import VYou
import VYouApple

@main
class AppDelegate: UIResponder, UIApplicationDelegate {



    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        let clientId = ProcessInfo.processInfo.environment["VYOU_CLIENT_ID"] ?? ""
        let serverUrl = ProcessInfo.processInfo.environment["VYOU_SERVER_URL"] ?? ""
        
        VYou.Builder(serverUrl: serverUrl, clientId: clientId).enableNetworkLogs(level: .all).initialize()
        VYouApple.Builder().initialize()
        
        return true
    }

    // MARK: UISceneSession Lifecycle

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }


}

