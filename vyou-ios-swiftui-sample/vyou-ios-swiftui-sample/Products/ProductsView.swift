import Foundation
import SwiftUI

struct ProductsView: View {
    @StateObject private var viewModel = ProductsViewModel()
    @EnvironmentObject private var router: Router
            
    var body: some View {
        NavigationView {
            LazyVStack {
                if(viewModel.showProgressView) {
                    ProgressView()
                }
                ForEach(viewModel.products) { product in
                    Text("Name: \(product.name)")
                    Text("Description: \(product.description)")
                    ForEach(product.prices) { price in
                        Text("Price: \(price.amount) \(price.currency)")
                        Text("Interval: Each \(price.period)")
                        Button("Subscribe") {
                            viewModel.subscribe(priceId: price.priceId)
                        }
                    }
                }
            }
            .padding()
            .navigationTitle("Products")
            .toolbar {
                ToolbarItem(placement: .navigationBarLeading) {
                    Button("Back") {
                        router.back()
                    }
                }
            }
            .alert(item: $viewModel.error) { error in
                Alert(title: Text("Products error"), message: Text(error.localizedDescription))
            }
        }.onAppear {
            viewModel.loadProducts()
        }
    }
}
