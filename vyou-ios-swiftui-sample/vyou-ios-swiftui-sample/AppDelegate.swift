//
//  AppDelegate.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 4/2/22.
//

import Foundation
import UIKit
import VYouGoogle
import VYouFacebook

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
        let googleHandle: Bool = (try? VYouGoogle.instance().handle(url: url)) ?? false
        let facebookHandle: Bool = (try? VYouFacebook.instance().handle(application: app, url: url)) ?? false
        return googleHandle && facebookHandle
    }
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        return (try? VYouFacebook.instance().didFinishLaunchingWithOptions(application: application, didFinishLaunchingWithOptions: launchOptions)) ?? false
    }

}
