# iOS SDK for [VYou](https://www.vyou-app.com/)

This is the iOS SDK for [VYou](https://www.vyou-app.com/), a service to provide user identity to your applications. This library includes a client SDK along some artifacts and a sample to agilize your workflow.

The SDK is written in Kotlin using Kotlin Multiplatform for the client side and in Swift for the integration with third party social libraries. 

## Overview

The SDK consist of various artifacts:

- [KMM-Client](#ios-client): Client to manage operations with VYou authentication server.
- [iOS-Apple](#integration-with-social-libraries): Library to sign in/up in VYou through Apple libraries.
- [iOS-Google](#integration-with-social-libraries): Library to sign in/up in VYou through Google libraries.
- [iOS-Facebook](#integration-with-social-libraries): Library to sign in/up in VYou through Facebook libraries.
- [iOS-Stripe](#integration-with-payment-methods): Library to make payments and subscriptions through Stripe.

Additionally, we created an [application sample](https://github.com/apiumhub/vyou-ios/blob/main/vyou-ios-swiftui-sample) using SwiftUI to check how can be implemented each artifact.

# Client

## Installation

The library is available through SPM (Swift Package Manager), you only need to go to your Xcode project, click on File > Add Packages and paste the git url on the search field. Also you can use it as library inside your Package.swift file.

```swift
.package(url: "https://github.com/apiumhub/vyou-ios",.upToNextMajor(from: "{latest-release-version}")),
```

The library will provide you four targets:
- VYou: Client library and required for other targets.
- VYouApple: Authenticate using Apple Sign In
- VYouGoogle: Authenticate using Google Sign In
- VYouFacebook: Authenticate using Facebook Log In

## Getting Started

The first step is initializing the `VYou` class, which is the main entry point for all the operations in the library. `VYou` is a class that contains all the operations that you can realize using the SDK; you'll use this method once, generate a single instance and use the rest of methods across your application.

To create the client, we need to invoke the builder class related with `VYou` class and pass them the required parameters:

```swift
let builder = VYou.Builder(clientId: "{VYOU_CLIENT_ID}", serverUrl: "{VYOU_SERVER_URL}")
```

These variables are provided by the VYou staff, the approach used in the samples is including this data through `Process Info` as environment variables:

```swift
let clientId = ProcessInfo.processInfo.environment["CLIENT_ID"]
let serverUrl = ProcessInfo.processInfo.environment["SERVER_URL"]
```

Additionally, the builder can be configurated with some optional functions. To track the network operations you can change the log level, by default is `none`.

```swift
//level - VYouLogLevel class
builder.enableNetworkLogs(level: .all)
```

VYouLogLevel is a `enum class` and you can select between `all`, `info`, `headers`, `body` or `none` they will affect to our [Ktor](https://ktor.io/docs/client-logging.html) implementation used by the client.

Lastly, we have two callbacks, first we have `addOnRefreshTokenFailure` when the refresh token is invalidated by the server and `addOnSignOut` after the signOut is completed successfully. Both callbacks aims to help you manage the application status when these events occur.

```swift
builder.addOnRefreshTokenFailure { error in
    //To do after event
}
builder.addOnSignOut { 
    //To do after event
}
```

Even if you use the optional functions or not, to finally initialize the client you need to invoke the `build` function of the builder.

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

Alternatively, if you are using Swift UI, you can build the client in the main entry point of the application.

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

After build the client, we can use it through the application calling `VYou.shared`. If the client is not initialized before call instance method, will throw an error related. The client provides functionality to authenticate an user and manage the user's information.

All the methods related with network operations are `native` functions using `kotlin coroutines`. The SDK provides two types of functions to support compatibility on iOS.

First, each function can be resolved through a completion handler method. For example:

```swift
func signIn(params: VYouSignInParams, completionHandler: (VYouCredentials) -> Void)
```

This approach can help in some projects but in majority of projects should be using an asynchronous solution like Async/Await, Combine or RxSwift. To support these cases, as we mentioned every function is `native` and can be encapsulated to support each case and this is done using [KMP-NativeCoroutines](https://github.com/rickclephas/KMP-NativeCoroutines) that can be installed using SPM.

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

This is some examples but you can check all the options in the [KMP-NativeCoroutines](https://github.com/rickclephas/KMP-NativeCoroutines) repository.

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

Each method returns a `VYouCredentials` class that contains the information to authorize any call covered by VYou auth server. Internally, this information is being saved in a encrypted keychain and can be recovered through these credentials methods along helper methods to check the user's session.

```swift
//Ex: VYou.shared.accessToken()
func isLoggedIn() -> Boolean
func tokenType() -> String
func accessToken() -> String
func credentials() -> VYouCredentials
func isValidToken() -> Boolean
```


If you have already a Google or Facebook implementation in your application, you can use these methods to sign in into VYou, further we will explain the social artifacts mentioned at the [overview](#overview) that covers the implementation of the social libraries.

### Sign up

To sign up a new user in the platform, is required to make the three steps below. First we sign up the new user providing an email along the acceptation of the required terms of use and privacy policy provided by the application, optionally can be added an information boolean any marketing purpose.

```swift
//VYouSignUpParams(email, termsOfUseAccepted, privacyPolicyAccepted, infoAccepted)
VYou.shared.signUp(params: VYouSignUpParams)
```

After sign up, the user will receive a confirmation code in the email provided in the previous step. The user must copy this code and introduce it to verify the register.

```swift
//VYouSignUpVerifyParams(code)
VYou.shared.signUpVerify(params: VYouSignUpVerifyParams)
```

Lastly, if the code provided is valid, the user must register a password related with the email provided using this method:

```swift
//VYouSignUpPasswordParams(password)
VYou.shared.signUpPassword(params: VYouSignUpPasswordParams)
```

All these steps are needed to ensure all the security steps related with OAuth protocol. After register password succesfully, the user can use the [sign in](#sign-in) method to log into the platform.

## Profile

Users have access to the information that they provide to the application using VYou. To retrieve the current information they have the next method.

```swift
VYou.shared.getProfile() -> VYouProfile
```

`VYouProfile` is a class that contains the email registered, the custom fields and the compliant status related with the tenant. If the status is false, the application should request the required fields to the user.

To update their information they have another method to modify the custom fields related with the tenant.

```swift
//VYouEditProfileParams(fields)
VYou.shared.editProfile(params: VYouEditProfileParams) -> VYouProfile
```

Is not required to provide all the fields, just the wanted to be modified.

## Payments

To make payments through Stripe, the SDK provides two methods to create payments through the VYou platform.

```swift
//Ex: VYou.shared.createPayment(params)

//VYouPaymentParams(amount: Long (in cents))
func createPayment(params: VYouPaymentParams) -> String
func createAnonymousPayment(params: VYouPaymentParams) -> String
```

Both methods require the `amount` desired in `cents` and will return the `secret` key requested by the Stripe payment SDK to display the payment sheet. In case that you don't have a integration with Stripe, the `VYouStripe` library explained further covers all the Stripe integration through the VYou platform.

## Subscriptions

To make subscriptions through Stripe, the SDK provide a few methods to manage all the subscription process.

First, we have the method to return all the products related with the tenant, along their price interval, further the `priceId` field will be required to create any subscription.

```swift
//Ex: VYou.shared.subscriptionProducts()

//VYouProduct(name, description, prices)
//VYouPrice(priceId, amount, currency, interval, intervalCount)
func subscriptionProducts()) -> List<VYouProduct>
```

Then, to create an subscription, similar like payments, we have a method that will return the `secret` key, but in this case we need the `priceId` related with the desire interval and product. Also, this functionality is covered in the `VYouStripe` library.

```swift
//Ex: VYou.shared.createSubscription(params)

//VYouSubscriptionParams(priceId)
func createSubscription(params: VYouSubscriptionParams) -> String
```

Also, there is a method to show the subscriptions that an user is subscribed.

```swift
//Ex: VYou.shared.mySubscriptions()

//VYouSubscription(subscriptionId, productName, amount, currency, nextBillingDate, created)
func mySubscriptions() -> List<VYouSubscription>
```

Finally, an user can cancel a subscription through the next method

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

If any call returns a `401 - Forbidden` http code means that the access token used is expired and should be refresh, to do that must use the **refresh token** method

```swift
VYou.shared.refreshToken() -> VYouCredentials
```

This should be implemented in a network interceptor to provide the smooth experience to the user, if the refresh token fails, the user must login again to retrieve a new access token.

# Integration with social libraries

To facilitate the integration with Apple, Google and Facebook, we created various artifacts to manage the login through for each platform.

## Getting started

The usage of each library are very similar but each one needs some previous configuration.

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

### Initialize the client

Each library have a Builder class to create the shared instance to be used. This can be initialized in the AppDelegate or main entry point of the Swift UI app like in the [client](#installation) section

```swift
VYouApple.Builder().build()
VYouFacebook.Builder().build()
VYouGoogle.Builder(clientId: "{GOOGLE_CLIENT_ID}").build()
```

Also, for Google and Facebook we need to add some methods related with application events.

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

### Sign in

Each libraries have similar functions to sign into VYou platform.

After apply these methods, we can use the `signIn()` method of each library.

```swift
//Ex: VYouApple.shared.signIn
//Ex: VYouGoogle.shared.signIn
//Ex: VYouFacebook.shared.signIn
func signIn(presenting: UIViewController, onFailure: @escaping (Error) -> Void, onSuccess: @escaping (VYouCredentials) -> Void)
```
Each method returns a `VYouCredentials` that you can use it at your purpose.

### Sign out

To sign out from the social libraries, we have the same method for each library, except Apple that doesn't need it.

```swift
//Ex: VYouGoogle.shared.signOut()
//Ex: VYouFacebook.shared.signOut()
func signOut()
```

If you use both platforms in the application, we encourage you to use the `signOut()` method from the [client](#other-methods) section when you user want to log out and then use these `signOut()` social methods inside the `addOnSignOut()` of the builder client class.

```swift
let builder = VYou.Builder()
builder.addOnSignOut {
    VYouGoogle.shared.signOut()
    VYouFacebook.shared.signOut()
}
```

# Integration with payment methods

To improve your client experience, the SDK also provides a solution using Stripe to make payments and create subscriptions methods.

## Initialize the client

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

### Payments

Through the SDK, we can create any payment to our users, the SDK provides two ways to do it, for users logged into the platform, or doing anonymously, when you don't need the user information.

```swift
VYouStripe.shared.createPayment(presenting: UIViewController, params: VYouPaymentsParams)
VYouStripe.shared.createAnonymousPayment(presenting: UIViewController, params: VYouPaymentsParams)
```

`VYouPaymentParams` is a data class that requires the desire amount to be displayed to the user in cents, so if you want to display 1 euro, you must create an object `VYouPaymentParams(amount: 100)`.

In the case of user cancels the payment or the operation fails, the SDK will return a `VYouError`.

### Subscriptions

In the case of subscriptions, the process is similar, the only changes is the params object, that now it is a `VYouSubscriptionParams(priceId: String)`. The `priceId` is the payment interval option related to the subscription (product in Stripe). The SDK through the `Client` library provides a way to display all the subscriptions related with the tenant. You can check this method and others related in the [section](#subscriptions)

```swift
VYouStripe.shared.createSubscription(presenting: UIViewController, params: VYouSubscriptionParams)
```

In the case of user cancels the subscription or the operation fails, the SDK will return a `VYouError`.