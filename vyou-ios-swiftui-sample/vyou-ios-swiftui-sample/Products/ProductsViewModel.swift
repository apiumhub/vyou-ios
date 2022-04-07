import Foundation
import VYou
import VYouCore
import SwiftUI
import KMPNativeCoroutinesRxSwift
import RxSwift
import VYouStripe

class ProductsViewModel: ObservableObject {
    @Published var products: [Product] = []
    @Published var showProgressView = true
    @Published var error: NetworkError?
    
    private let disposeBag = DisposeBag()
    
    func loadProducts() {
        createSingle(for: VYou.shared.subscriptionProducts())
            .subscribe { [weak self] products in
                self?.showProgressView = false
                self?.products = products.map({ product in
                    Product(name: product.name,
                            description: product.description_ ?? "No description",
                            prices: product.prices.map({ price in
                        Price(priceId: price.id, amount: Double(price.amount), currency: price.currency, period: "\(price.intervalCount) \(price.interval.name)")
                    })
                    )
                })
            } onFailure: { [weak self] error in
                self?.showProgressView = false
                self?.error = NetworkError(errorDescription: error.localizedDescription)
            }
            .disposed(by: disposeBag)
    }
    
    func subscribe(priceId: String) {
        guard let viewController = (UIApplication.shared.connectedScenes.first as? UIWindowScene)?.windows.first?.rootViewController else { return }
        
        let params = VYouSubscriptionParams(priceId: priceId)
        
        VYouStripe.shared.createSubscription(presenting: viewController, params: params, onFailure: { _ in }, onSuccess: { _ in })
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
