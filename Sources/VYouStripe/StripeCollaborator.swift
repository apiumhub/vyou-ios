import Foundation
import Stripe
import UIKit
import VYouCore

class StripeCollaborator {
    let merchantDisplayName: String
    
    init(merchantDisplayName: String) {
        self.merchantDisplayName = merchantDisplayName
    }
    
    func presentPayment(from: UIViewController, secret: String, onFailure: @escaping (Error) -> Void, onSuccess: @escaping () -> Void) {
        var configuration = PaymentSheet.Configuration()
        configuration.merchantDisplayName = merchantDisplayName
        let paymentSheet = PaymentSheet(paymentIntentClientSecret: secret, configuration: configuration)
        
        DispatchQueue.main.async {
            paymentSheet.present(from: from) { paymentResult in
                switch paymentResult {
                case .completed:
                    onSuccess()
                case .canceled:
                    onFailure(VYouStripeError.paymentCanceled)
                case .failed(let error):
                    debugPrint("Stripe payment error: \(error.localizedDescription)")
                    onFailure(VYouStripeError.paymentFailure)
                }
            }
        }
    }
}
