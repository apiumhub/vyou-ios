//
//  Router.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import SwiftUI
import VYou

class Router: ObservableObject {
    @Published var screen: Screen = Screen.login
    private var backStack: [Screen] = []
    
    init() {
        screen = isLogged() ? Screen.profile : Screen.login
        backStack.append(screen)
    }
    
    func open(_ screen: Screen) {
        withAnimation {
            self.screen = screen
        }
        backStack.append(screen)
    }
    
    func cleanOpen(_ screen: Screen) {
        backStack.removeAll()
        open(screen)
    }
    
    func back() {
        backStack.popLast()
        withAnimation {
            self.screen = backStack.last ?? Screen.profile
        }
    }
    
    private func isLogged() -> Bool {
        return VYou.shared.isLoggedIn()
    }
}


enum Screen {
    case login
    case forgotPassword
    case register
    case profile
}
