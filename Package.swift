// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "VYou",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(name: "VYou", targets: ["VYou"])
    ],
    dependencies: [
            // Dependencies declare other packages that this package depends on.
            // .package(url: /* package url */, from: "1.0.0"),
            .package(url: "https://github.com/krzyzanowskim/CryptoSwift.git", .upToNextMajor(from: "1.0.0")),
        ],
    targets: [
        .binaryTarget(
            name: "VYouCore",
            path: "vyou-kmm/VYouCore.xcframework"
        ),
        .target(name: "CBcrypt"),
        .target(
            name: "VYou",
            dependencies: [
                "VYouCore",
                .product(name: "CryptoSwift", package: "CryptoSwift"),
                .target(name: "CBcrypt")
            ],
            path: "Sources/VYou"
        ),
        .testTarget(
            name: "VYouTests",
            dependencies: [
                "VYou"
            ]
        )
    ]
)
