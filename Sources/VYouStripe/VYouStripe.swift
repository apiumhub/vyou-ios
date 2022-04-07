import Foundation
import Stripe
import VYou
import VYouCore
import UIKit

public final class VYouStripe {
    private let collaborator: StripeCollaborator
    public static var shared: VYouStripe!
    
    private init(publishableKey: String) {
        StripeAPI.defaultPublishableKey = publishableKey
        collaborator = StripeCollaborator()
    }
    
    public func createPayment(presenting: UIViewController, params: VYouPaymentParams, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (Bool) -> Void) {
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
    
    public func createAnonymousPayment(presenting: UIViewController, params: VYouPaymentParams, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (Bool) -> Void) {
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
    
    public func createSubscription(presenting: UIViewController, params: VYouSubscriptionParams, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (Bool) -> Void) {
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
        
        public init(publishableKey: String) {
            self.publishableKey = publishableKey
        }
        
        public func build() {
            VYouStripe.shared = VYouStripe(publishableKey: publishableKey)
        }
    }
}

enum VYouStripeError: Error {
    case initialize
    case socialImplementation
    case invalidSecret
}
