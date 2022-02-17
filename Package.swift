// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "VYou",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(name: "VYou", targets: ["VYou"]),
        .library(name: "VYouApple", targets: ["VYouApple"]),
        .library(name: "VYouFacebook", targets: ["VYouFacebook"]),
        .library(name: "VYouGoogle", targets: ["VYouGoogle"])
    ],
    dependencies: [
            // Dependencies declare other packages that this package depends on.
            // .package(url: /* package url */, from: "1.0.0"),
            .package(url: "https://github.com/facebook/facebook-ios-sdk",.upToNextMajor(from: "12.0.0")),
            .package(url: "https://github.com/google/GoogleSignIn-iOS.git", .upToNextMajor(from: "6.0.2")),
            .package(url: "https://github.com/krzyzanowskim/CryptoSwift.git", .upToNextMajor(from: "1.0.0")),
            .package(url: "https://github.com/vapor/vapor.git", from: "4.0.0"),
        ],
    targets: [
        .binaryTarget(
            name: "VYouCore",
            path: "VYouCore.xcframework"
        ),
        .target(
            name: "VYou",
            dependencies: [
                "VYouCore",
                .product(name: "CryptoSwift", package: "CryptoSwift"),
                .product(name: "Vapor", package: "vapor")
            ],
            path: "Sources/VYou"
        ),
        .target(name: "VYouApple",dependencies: ["VYou"],path: "Sources/VYouApple"),
        .target(
            name: "VYouFacebook",
            dependencies: [
                "VYou",
                .product(name: "FacebookCore", package: "facebook-ios-sdk"),
                .product(name: "FacebookLogin", package: "facebook-ios-sdk")
            ],
            path: "Sources/VYouFacebook"
        ),
        .target(
            name: "VYouGoogle",
            dependencies: [
                "VYou",
                .product(name: "GoogleSignIn", package: "GoogleSignIn-iOS")
            ],
            path: "Sources/VYouGoogle"
        ),
        .testTarget(
            name: "VYouTests",
            dependencies: [
                "VYou"
            ]
        )
    ]
)
