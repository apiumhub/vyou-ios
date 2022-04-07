import Foundation
import Stripe
import UIKit

class StripeCollaborator {
    func presentPayment(from: UIViewController, secret: String, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (Bool) -> Void) {
        var configuration = PaymentSheet.Configuration()
        configuration.merchantDisplayName = "VYou Test"
        let paymentSheet = PaymentSheet(paymentIntentClientSecret: secret, configuration: configuration)
        
        paymentSheet.present(from: from) { paymentResult in
            switch paymentResult {
            case .completed:
                onSuccess(true)
            case .canceled:
                onSuccess(false)
            case .failed(let error):
                onFailure(error)
            }
        }
        
    }
}
