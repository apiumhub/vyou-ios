import Foundation
import Stripe
import VYou
import VYouCore
import UIKit

public final class VYouStripe {
    private let collaborator: StripeCollaborator
    public static var shared: VYouStripe!
    
    private init(publishableKey: String, merchantDisplayName: String) {
        StripeAPI.defaultPublishableKey = publishableKey
        collaborator = StripeCollaborator(merchantDisplayName: merchantDisplayName)
    }
    
    public func createPayment(presenting: UIViewController, params: VYouPaymentParams, onFailure: @escaping (Error) -> Void, onSuccess: @escaping () -> Void) {
        VYou.shared.createPayment(params: params) { [weak self] (secret, error) in
            if let error = error {
                onFailure(error)
                return
            }
            guard let secret = secret else {
                onFailure(VYouStripeError.invalidSecret)
                return
            }
            self?.collaborator.presentPayment(from: presenting, secret: secret, onFailure: onFailure, onSuccess: onSuccess)
        }
    }
    
    public func createAnonymousPayment(presenting: UIViewController, params: VYouPaymentParams, onFailure: @escaping (Error) -> Void, onSuccess: @escaping () -> Void) {
        VYou.shared.createAnonymousPayment(params: params) { [weak self] (secret, error) in
            if let error = error {
                onFailure(error)
                return
            }
            guard let secret = secret else {
                onFailure(VYouStripeError.invalidSecret)
                return
            }
            self?.collaborator.presentPayment(from: presenting, secret: secret, onFailure: onFailure, onSuccess: onSuccess)
        }
    }
    
    public func createSubscription(presenting: UIViewController, params: VYouSubscriptionParams, onFailure: @escaping (Error) -> Void, onSuccess: @escaping () -> Void) {
        VYou.shared.createSubscription(params: params) { [weak self] (secret, error) in
            if let error = error {
                onFailure(error)
                return
            }
            guard let secret = secret else {
                onFailure(VYouStripeError.invalidSecret)
                return
            }
            self?.collaborator.presentPayment(from: presenting, secret: secret, onFailure: onFailure, onSuccess: onSuccess)
        }
    }
    
    public class Builder {
        let publishableKey: String
        let merchantDisplayName: String
        
        public init(publishableKey: String, merchantDisplayName: String) {
            self.merchantDisplayName = merchantDisplayName
            self.publishableKey = publishableKey
        }
        
        public func build() {
            VYouStripe.shared = VYouStripe(publishableKey: publishableKey, merchantDisplayName: merchantDisplayName)
        }
    }
}

enum VYouStripeError: Error {
    case invalidSecret
    case paymentCanceled
    case paymentFailure
}
