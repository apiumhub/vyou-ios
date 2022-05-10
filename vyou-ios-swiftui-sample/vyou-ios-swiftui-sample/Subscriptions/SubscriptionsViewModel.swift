import Foundation
import VYou
import VYouCore
import KMPNativeCoroutinesAsync

class SubscriptionsViewModel: ObservableObject {
    @Published var subscriptions: [Subscription] = []
    @Published var showProgressView = false
    @Published var error: NetworkError?
    
    @MainActor
    func loadSubscriptions() async {
        showProgressView = true
        do {
            let vyouSubscriptions = try await asyncFunction(for: VYou.shared.mySubscriptions())
            subscriptions = vyouSubscriptions.map({ subscription in
                Subscription(
                    subId: subscription.id,
                    name: subscription.productName,
                    amount: Double(subscription.amount),
                    currency: subscription.currency
                )
            })
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
        showProgressView = false
    }
    
    @MainActor
    func cancel(subscriptionId: String) async {
        showProgressView = true
        do {
            let params = VYouSubscriptionCancelParams(subscriptionId: subscriptionId)
            try await asyncFunction(for: VYou.shared.cancelSubscription(params: params))
        } catch {
            self.error = NetworkError(errorDescription: error.localizedDescription)
        }
        showProgressView = false
    }
}


struct Subscription: Identifiable {
    let id = UUID()
    let subId: String
    let name: String
    let amount: Double
    let currency: String
}
