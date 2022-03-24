// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "Repro",
    platforms: [ .iOS(.v10) ],
    products: [
        .library(
            name: "Repro",
            targets: ["Repro", "ReproDependencyDummy"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "Repro",
            path: "Repro.xcframework"
        ),
        .target(
            name: "ReproDependencyDummy",
            path: "SwiftPackageManager/ReproDependencyDummy",
            linkerSettings: [
                .linkedFramework("UIKit"),
                .linkedFramework("CoreGraphics"),
                .linkedFramework("QuartzCore"),
                .linkedFramework("WebKit"),
                .linkedFramework("SystemConfiguration"),
                .linkedFramework("UserNotifications"),
            ]
        ),
    ]
)

