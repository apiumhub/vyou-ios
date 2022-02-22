//
//  NetworkError.swift
//  vyou-ios-swiftui-sample
//
//  Created by Ruben on 28/1/22.
//

import Foundation

struct NetworkError: Error, LocalizedError, Identifiable {
    var id: String {
        self.localizedDescription
    }
    var errorDescription: String?
    
    init(errorDescription: String?) {
        self.errorDescription = errorDescription
    }
}
