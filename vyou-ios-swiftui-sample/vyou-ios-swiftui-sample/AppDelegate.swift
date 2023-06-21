//
//  AppDelegate.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 4/2/22.
//

import Foundation
import UIKit

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
        let googleHandle: Bool = GoogleService.shared.handle(url: url)
        let facebookHandle: Bool = FacebookService.shared.handle(application: app, url: url)
        return googleHandle && facebookHandle
    }
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        return FacebookService.shared.didFinishLaunchingWithOptions(application: application, didFinishLaunchingWithOptions: launchOptions)
    }
}
