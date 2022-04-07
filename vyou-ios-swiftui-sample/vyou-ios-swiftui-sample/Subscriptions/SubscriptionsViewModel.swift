import Foundation
import VYou
import VYouCore
import SwiftUI
import KMPNativeCoroutinesRxSwift
import RxSwift
import VYouStripe

class SubscriptionsViewModel: ObservableObject {
    @Published var subscriptions: [Subscription] = []
    @Published var showProgressView = true
    @Published var error: NetworkError?
    
    private let disposeBag = DisposeBag()
    
    func loadSubscriptions() {
        createSingle(for: VYou.shared.mySubscriptions())
            .subscribe { [weak self] subscriptions in
                self?.showProgressView = false
                self?.subscriptions = subscriptions.map({ subscription in
                    Subscription(
                        subId: subscription.id,
                        name: subscription.productName,
                        amount: Double(subscription.amount),
                        currency: subscription.currency
                )
                })
            } onFailure: { [weak self] error in
                self?.showProgressView = false
                self?.error = NetworkError(errorDescription: error.localizedDescription)
            }
            .disposed(by: disposeBag)
    }
    
    func cancel(subscriptionId: String) {
        let params = VYouSubscriptionCancelParams(subscriptionId: subscriptionId)

        VYou.shared.cancelSubscription(params: params, completionHandler: {_, _ in })
    }
}


struct Subscription: Identifiable {
    let id = UUID()
    let subId: String
    let name: String
    let amount: Double
    let currency: String
}
