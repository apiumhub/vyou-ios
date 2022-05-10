import Foundation
import SwiftUI

struct SubscriptionsView: View {
    @StateObject private var viewModel = SubscriptionsViewModel()
    @EnvironmentObject private var router: Router
    
    var body: some View {
        NavigationView {
            LazyVStack {
                if(viewModel.showProgressView) {
                    ProgressView()
                }
                ForEach(viewModel.subscriptions) { subscription in
                    Text("Product: \(subscription.name)")
                    Text("Price: \(subscription.amount) \(subscription.currency)")
                    Button("Cancel subscription") {
                        Task { await viewModel.cancel(subscriptionId: subscription.subId) }
                    }
                }
            }
            .padding()
            .navigationTitle("Subscriptions")
            .toolbar {
                ToolbarItem(placement: .navigationBarLeading) {
                    Button("Back") {
                        router.back()
                    }
                }
            }
            .alert(item: $viewModel.error) { error in
                Alert(title: Text("Subscriptions error"), message: Text(error.localizedDescription))
            }
        }.onAppear {
            Task { await viewModel.loadSubscriptions() }
        }
    }
}
