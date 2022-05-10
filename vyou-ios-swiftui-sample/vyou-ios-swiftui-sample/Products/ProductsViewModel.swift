import Foundation
import VYou
import VYouCore
import SwiftUI
import VYouStripe
import KMPNativeCoroutinesAsync

class ProductsViewModel: ObservableObject {
    @Published var products: [Product] = []
    @Published var showProgressView = false
    @Published var error: NetworkError?
        
    @MainActor
    func loadProducts() async {
        showProgressView = true
        do {
            let vyouProducts = try await asyncFunction(for: VYou.shared.subscriptionProducts())
            products = vyouProducts.map({ product in
                Product(name: product.name,
                        description: product.description_ ?? "No description",
                        prices: product.prices.map({ price in
                            Price(priceId: price.id, amount: Double(price.amount), currency: price.currency, period: "\(price.intervalCount) \(price.interval.name)")
                    
                        })
                )
            })
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
        showProgressView = false
    }
    
    func subscribe(priceId: String) {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        let params = VYouSubscriptionParams(priceId: priceId)
        
        VYouStripe.shared.createSubscription(presenting: viewController, params: params, onFailure: { _ in }, onSuccess: { })
    }
}


struct Product: Identifiable {
    let id = UUID()
    let name: String
    let description: String
    let prices: [Price]
}

struct Price: Identifiable {
    let id = UUID()
    let priceId: String
    let amount: Double
    let currency: String
    let period: String
}
