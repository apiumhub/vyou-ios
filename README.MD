# iOS SDK for [VYou](https://www.vyou-app.com/)

This is the iOS SDK for [VYou](https://www.vyou-app.com/), a service to provide user identity to your applications. This library includes a client SDK along some artifacts and a sample to streamline your workflow.

The SDK is written in Kotlin using Kotlin Multiplatform for the client side and in Swift for the integration with third-party libraries.

## Overview

- [KMM-Client](#client): Client to manage operations with VYou authentication server.

In addition, we have created a [sample application](https://github.com/VYou-App/vyou-ios/blob/main/vyou-ios-swiftui-sample) using SwiftUI to test how each artefact can be implemented.

# Client

## Installation

The library is available through SPM (Swift Package Manager), just go to your Xcode project, click File > Add Packages and paste the git url in the search field. You can also use it as a library inside your Package.swift file.

```swift
.package(url: "https://github.com/VYou-App/vyou-ios",.upToNextMajor(from: "{latest-release-version}")),
```

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

This approach may help in some projects but in most projects an asynchronous solution such as Async/Await, Combine or RxSwift should be used. To support these cases, as we have mentioned each function is `native` and can be encapsulated to support each case and this is done using [KMP-NativeCoroutines](https://github.com/rickclephas/KMP-NativeCoroutines).

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

### Sign in

```swift
//VYouSignInProvider.UserPassword(username, password)
VYou.shared.signIn(params: VYouSignInProvider.UserPassword) -> VYouCredentials

//VYouSignInProvider.Apple(apple)
VYou.shared.signInFacebook(params: VYouSignInProvider.Apple) -> VYouCredentials

//VYouSignInProvider.Google(googleIdToken)
VYou.shared.signInGoogle(params: VYouSignInProvider.Google) -> VYouCredentials

//VYouSignInProvider.Facebook(facebookAccessToken)
VYou.shared.signInFacebook(params: VYouSignInProvider.Facebook) -> VYouCredentials
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
