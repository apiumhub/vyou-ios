# iOS SDK for [VYou](https://www.vyou-app.com/)

This is the iOS SDK for [VYou](https://www.vyou-app.com/), a service to provide user identity to your applications. This library includes a client SDK along some artifacts and a sample to streamline your workflow.

The SDK is written in Kotlin using Kotlin Multiplatform for the client side and in Swift for the integration with third-party social libraries.

## Overview

The SDK consist of various artifacts:

- [KMM-Client](#client): Client to manage operations with VYou authentication server.
- [iOS-Apple](#integration-with-social-libraries): Library to sign in/up in VYou through Apple libraries.
- [iOS-Google](#integration-with-social-libraries): Library to sign in/up in VYou through Google libraries.
- [iOS-Facebook](#integration-with-social-libraries): Library to sign in/up in VYou through Facebook libraries.
- [iOS-Stripe](#integration-with-payment-methods): Library to make payments and subscriptions through Stripe.

In addition, we have created a [sample application](https://github.com/apiumhub/vyou-ios/blob/main/vyou-ios-swiftui-sample) using SwiftUI to test how each artefact can be implemented.

# Client

## Installation

The library is available through SPM (Swift Package Manager), just go to your Xcode project, click File > Add Packages and paste the git url in the search field. You can also use it as a library inside your Package.swift file.

```swift
.package(url: "https://github.com/apiumhub/vyou-ios",.upToNextMajor(from: "{latest-release-version}")),
```

The library will provide you four targets:
- VYou: Client library and required for other targets.
- VYouApple: Authenticate using Apple Sign In
- VYouGoogle: Authenticate using Google Sign In
- VYouFacebook: Authenticate using Facebook Log In

## Getting Started

The first step is to initialise the `VYou` class, which is the main entry point for all operations in the library. `VYou` is a class that contains all the operations you can perform using the SDK; you will use this method once, generating a single instance and using the rest of the methods in your application.

To create the client, we need to invoke the constructor class related to the `VYou` class and pass it the required parameters:

```swift
let builder = VYou.Builder(clientId: "{VYOU_CLIENT_ID}", serverUrl: "{VYOU_SERVER_URL}")
```

These variables are provided by VYou staff, the approach used in the samples is to include this data through `Process Info` as environment variables:

```swift
let clientId = ProcessInfo.processInfo.environment["CLIENT_ID"]
let serverUrl = ProcessInfo.processInfo.environment["SERVER_URL"]
```

In addition, the constructor can be configured with some optional functions. To track network operations the logging level can be changed, default is `none`.

```swift
//level - VYouLogLevel class
builder.enableNetworkLogs(level: .all)
```

VYouLogLevel is an `enum class` class and you can select between `all`, `info`, `headers`, `body` or `none` which will affect our implementation [Ktor](https://ktor.io/docs/client-logging.html) used by the client.

Finally, we have two callbacks, first we have `addOnRefreshTokenFailure` when the refresh token is invalidated by the server and `addOnSignOut` after the signOut completes successfully. Both callbacks are intended to help manage the state of the application when these events occur.

```swift
builder.addOnRefreshTokenFailure { error in
    //To do after event
}
builder.addOnSignOut { 
    //To do after event
}
```

Whether you use the optional functions or not, to finally initialise the client you need to invoke the `build` function of the builder.

```swift
builder.build()
```

A recommended practice is to initialize `VYou` in the `AppDelegate` class:

```swift
import VYou

class AppDelegate : UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        let clientId = ProcessInfo.processInfo.environment["CLIENT_ID"]
        let serverUrl = ProcessInfo.processInfo.environment["SERVER_URL"]
        VYou.Builder(clientId: clientId, serverUrl: serverUrl)
        //additional functions if needed
        .build()
    }
}
```

Alternatively, if you are using Swift UI, you can build the client into the main entry point of the application.

```swift
import VYou

@main
struct MainApp: App {
    init() {
        let clientId = ProcessInfo.processInfo.environment["CLIENT_ID"]
        let serverUrl = ProcessInfo.processInfo.environment["SERVER_URL"]
        VYou.Builder(clientId: clientId, serverUrl: serverUrl)
        //additional functions if needed
        .build()
    }
}
```

### Using the client

After building the client, we can use it throughout the application by calling `VYou.shared`. If the client is not initialised before calling the instance method, it will throw a related error. The client provides functionality to authenticate a user and manage user information.

All methods related to network operations are `native` functions using `Kotlin coroutines`. The SDK provides two types of functions to support iOS compatibility.

First, each function can be resolved through a completion handler method. For example:

```swift
func signIn(params: VYouSignInParams, completionHandler: (VYouCredentials) -> Void)
```

This approach may help in some projects but in most projects an asynchronous solution such as Async/Await, Combine or RxSwift should be used. To support these cases, as we have mentioned each function is `native` and can be encapsulated to support each case and this is done using [KMP-NativeCoroutines](https://github.com/rickclephas/KMP-NativeCoroutines) which can be installed using SPM.

When you install it, you have multiple targets to support each asynchronous framework:
- KMPNativeCoroutines: Core part of the framework and required
- KMPNativeCoroutinesAsync: To use async/await operations with VYou native functions.
- KMPNativeCoroutinesCombine: To use task operations with VYou native functions.
- KMPNativeCoroutinesRxSwift: To use rx single/observable operations with VYou native functions.

```swift
import KMPNativeCoroutines
import VYou

//Async/Await
import KMPNativeCoroutinesAsync

func signIn() -> VYouCredentials {
    return asyncFunction(for: VYou.shared.signIn(params: VYouSignInparams))
}

//Combine
import KMPNativeCoroutinesCombine

func signIn() -> AnyPublisher<VYouCredentials, Error> {
    return createFuture(for: VYou.shared.signIn(params: VYouSignInparams))
}

//RxSwift
import KMPNativeCoroutinesRxSwift

func signIn() -> Single<VYouCredentials> {
    return createSingle(for: VYou.shared.signIn(params: VYouSignInparams))
}
```

These are some examples but you can check all the options in the [KMP-NativeCoroutines] repository (https://github.com/rickclephas/KMP-NativeCoroutines).

### Sign in

```swift
//VYouSignInParams(username, password)
VYou.shared.signIn(params: VYouSignInParams) -> VYouCredentials

//VYouSignInSocialParams(apple)
VYou.shared.signInFacebook(params: VYouSignInSocialParams) -> VYouCredentials

//VYouSignInSocialParams(googleIdToken)
VYou.shared.signInGoogle(params: VYouSignInSocialParams) -> VYouCredentials

//VYouSignInSocialParams(facebookAccessToken)
VYou.shared.signInFacebook(params: VYouSignInSocialParams) -> VYouCredentials
```

Each method returns a `VYouCredentials` class that contains the information to authorise any call covered by the VYou auth server. Internally, this information is stored in an encrypted keyring and can be retrieved through these credentials methods along with helper methods to check the user's session.

```swift
//Ex: VYou.shared.accessToken()
func isLoggedIn() -> Boolean
func tokenType() -> String
func accessToken() -> String
func credentials() -> VYouCredentials
func isValidToken() -> Boolean
```

If you already have a Google or Facebook implementation in your application, you can use these methods to log in to VYou, plus we will explain the social artefacts mentioned in the [overview](#overview) that covers the implementation of the social libraries.

### Sign up

To register a new user on the platform, the following three steps are necessary. Firstly the new user is registered by providing an email along with the acceptance of the required terms of use and the privacy policy provided by the application, optionally a boolean information can be added for marketing purposes.


```swift
//VYouSignUpParams(email, termsOfUseAccepted, privacyPolicyAccepted, infoAccepted)
VYou.shared.signUp(params: VYouSignUpParams)
```

After sign up, the user will receive a confirmation code in the email provided in the previous step. The user must copy this code and introduce it to verify the register.

```swift
//VYouSignUpVerifyParams(code)
VYou.shared.signUpVerify(params: VYouSignUpVerifyParams)
```

Finally, if the provided code is valid, the user must register a password related to the provided email using this method:

```swift
//VYouSignUpPasswordParams(password)
VYou.shared.signUpPassword(params: VYouSignUpPasswordParams)
```

All these steps are necessary to ensure all security steps related to the OAuth protocol. After successfully registering the password, the user can use the [sign in](#sign-in) method to log in to the platform.

## Profile

Users have access to the information they provide to the application using VYou. To retrieve the current information they have the following method.

```swift
VYou.shared.getProfile() -> VYouProfile
```

`VYouProfile` is a class containing the registered email, custom fields and the compliance status related to the tenant. If the status is false, the application should request the required fields from the user.

To update your information you have another method to modify the custom fields related to the tenant.

```swift
//VYouEditProfileParams(fields)
VYou.shared.editProfile(params: VYouEditProfileParams) -> VYouProfile
```

It is not necessary to provide all fields, only the ones you want to modify.

## Payments

To make payments through Stripe, the SDK provides two methods to create payments through the VYou platform.

```swift
//Ex: VYou.shared.createPayment(params)

//VYouPaymentParams(amount: Long (in cents))
func createPayment(params: VYouPaymentParams) -> String
func createAnonymousPayment(params: VYouPaymentParams) -> String
```

Both methods require the desired `amount` in `cents` and will return the `secret` key requested by Stripe's payment SDK to display the payment sheet. In case you don't have a Stripe integration, the `VYouStripe` library explained below covers all Stripe integration through the VYou platform.

## Subscriptions

To make subscriptions through Stripe, the SDK provides a few methods to manage the whole subscription process.

Firstly, we have the method to return all the products related to the tenant, along with their price range, plus the `priceId` field will be required to create any subscription.


```swift
//Ex: VYou.shared.subscriptionProducts()

//VYouProduct(name, description, prices)
//VYouPrice(priceId, amount, currency, interval, intervalCount)
func subscriptionProducts()) -> List<VYouProduct>
```

Then, to create a subscription, similar to payments, we have a method that will return the `secret` key, but in this case we need the `priceId` related to the desire interval and the product. Also, this functionality is covered in the `VYouStripe` library.


```swift
//Ex: VYou.shared.createSubscription(params)

//VYouSubscriptionParams(priceId)
func createSubscription(params: VYouSubscriptionParams) -> String
```

In addition, there is a method to display the subscriptions to which a user is subscribed.

```swift
//Ex: VYou.shared.mySubscriptions()

//VYouSubscription(subscriptionId, productName, amount, currency, nextBillingDate, created)
func mySubscriptions() -> List<VYouSubscription>
```

Finally, a user can cancel a subscription through the following method

```swift
//Ex: VYou.shared.cancelSubscription(params)

//VYouSubscriptionCancelParams(subscriptionId)
func cancelSubscription(params: VYouSubscriptionCancelParams)
```

## Other methods

To **log out** of the platform and clear the saved credentials, there is a sign out method
```swift
VYou.shared.signOut()
```

Users also can **reset password** using the next method, after a successful call they will receive an email with a confirmation token and they must proceed like in the [sign up](#sign-up) process after register the email.

```swift
//VYouResetPasswordParams(email)
VYou.shared.resetPassword(params: VYouResetPasswordParams)
```

If any call returns a `401 - Forbidden` http code it means that the access token used has expired and must be refreshed, to do this you must use the **refresh token** method.

```swift
VYou.shared.refreshToken() -> VYouCredentials
```

This must be implemented in a network interceptor to provide a smooth user experience, if the refresh token fails, the user must log in again to retrieve a new access token.

# Integration with social libraries

To facilitate integration with Apple, Google and Facebook, we have created several artefacts to manage login across each platform.

## Getting started (Social)

The use of each library is very similar but each one needs a previous configuration.

### Apple
To use Apple Sign In, you need to activate the Sign In through Application's target > Signing&Capabilities > Add Capability > Sign in with Apple

This will generate an entitlements file associated with the target and validate the functions.

### Google
Inside Info.plist must be provided the url related with Google Client Id of your project inside URLTypes

```xml
<key>CFBundleURLTypes</key>
<array>
  <dict>
  <key>CFBundleURLSchemes</key>
  <array>
    <string>{GOOGLE_CLIENT_URL}</string>
  </array>
  </dict>
</array>
```

### Facebook
In case of Facebook, you need to include Facebook Client Id of your project plus some data to be displayed in the web dialog.

```xml
<key>CFBundleURLTypes</key>
<array>
  <dict>
  <key>CFBundleURLSchemes</key>
  <array>
    <string>fb{FACEBOOK-CLIENT-ID}</string>
  </array>
  </dict>
</array>
<key>FacebookAppID</key>
<string>{FACEBOOK-CLIENT-ID}</string>
<key>FacebookDisplayName</key>
<string>{FACEBOOK-CLIENT-NAME}</string>
```

### Initialize the client (Social)

Each library has a Builder class to create the shared instance to be used. This can be initialised in the AppDelegate or main entry point of the Swift UI application as in [client](#installation) section

```swift
VYouApple.Builder().build()
VYouFacebook.Builder().build()
VYouGoogle.Builder(clientId: "{GOOGLE_CLIENT_ID}").build()
```

In addition, for Google and Facebook we need to add some methods related to application events.

```swift
@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        VYouFacebook.shared.didFinishLaunchingWithOptions(application: application, didFinishLaunchingWithOptions: launchOptions)
    }

    func application(_ app: UIApplication, open url: URL, options: [UIApplication.OpenURLOptionsKey : Any] = [:]) -> Bool {
        VYouGoogle.shared.handle(url: url)
        VYouFacebook.shared.handle(application: app, url: url)
    }
}
```

Then, we can start using both libraries inside our application through their `shared` method. Remember, that if you don't build the libraries, the `shared` instance will throw an exception.

### Sign in (Social)

Each of the libraries has similar functions for signing in to the VYou platform.

After apply these methods, we can use the `signIn()` method of each library.

```swift
//Ex: VYouApple.shared.signIn
//Ex: VYouGoogle.shared.signIn
//Ex: VYouFacebook.shared.signIn
func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (VYouCredentials) -> Void)
```
Each method returns a `VYouCredentials` that you can use as you wish.

### Sign out (Social)

To sign out of the social libraries, we have the same method for each library, except Apple which doesn't need it.

```swift
//Ex: VYouGoogle.shared.signOut()
//Ex: VYouFacebook.shared.signOut()
func signOut()
```

If you use both platforms in your application, we encourage you to use the `signOut()` method in the [client](#other-methods) section when the user wants to log out and then use these social `signOut()` methods within `addOnSignOut()` of the client builder class.

```swift
let builder = VYou.Builder()
builder.addOnSignOut {
    VYouGoogle.shared.signOut()
    VYouFacebook.shared.signOut()
}
```

# Integration with payment methods

To enhance the customer experience, the SDK also provides a solution that uses Stripe to make payments and create subscription methods.

## Initialize the client (Stripe)

The library have a Builder class to create the shared instance to be used. This can be initialized in the AppDelegate or main entry point of the Swift UI app like in the [client](#installation) section.

```swift
// publishableKey - Key from Stripe's dashboard
// merchantDisplayName - The name of the merchant that you want to display in the payment sheet.
VYouStripe.Builder(
    publishableKey: String,
    merchantDisplayName: String
).build()
```

Then, we can start using the library inside our application through their `shared` instance. Remember, that if you don't build the library, the `shared` instance will throw an exception.

### Payments (Stripe)

Through the SDK, we can create any payment to our users, the SDK provides two ways to do it, for users logged into the platform, or doing anonymously, when you don't need the user information.

```swift
VYouStripe.shared.createPayment(presenting: UIViewController, params: VYouPaymentsParams)
VYouStripe.shared.createAnonymousPayment(presenting: UIViewController, params: VYouPaymentsParams)
```

`VYouPaymentParams` is a data class that requires the desire amount to be displayed to the user in cents, so if you want to display 1 euro, you must create an object `VYouPaymentParams(amount: 100)`.

In the case of user cancels the payment or the operation fails, the SDK will return a `VYouError`.

### Subscriptions (Stripe)

In the case of subscriptions, the process is similar, the only changes is the params object, that now it is a `VYouSubscriptionParams(priceId: String)`. The `priceId` is the payment interval option related to the subscription (product in Stripe). The SDK through the `Client` library provides a way to display all the subscriptions related with the tenant. You can check this method and others related in the [section](#subscriptions)

```swift
VYouStripe.shared.createSubscription(presenting: UIViewController, params: VYouSubscriptionParams)
```

In the case of user cancels the subscription or the operation fails, the SDK will return a `VYouError`.