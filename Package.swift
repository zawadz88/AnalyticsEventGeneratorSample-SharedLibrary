// swift-tools-version:5.3

import PackageDescription

// BEGIN KMMBRIDGE VARIABLES BLOCK (do not edit)
let remoteKotlinUrl = "https://maven.pkg.github.com/zawadz88/AnalyticsEventGeneratorSample-SharedLibrary/dev/zawadzki/sharedanalyticslibrary/shared-analytics-library-kmmbridge/1.0.0/shared-analytics-library-kmmbridge-1.0.0.zip"
let remoteKotlinChecksum = "8a55a6cdbfebae10f9d99395874d57b259959b2ec811a1bba13913fdc36e83ee"
let packageName = "SharedAnalyticsLibrary"
// END KMMBRIDGE BLOCK

let package = Package(
    name: packageName,
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: packageName,
            targets: [packageName]
        ),
    ],
    targets: [
        .binaryTarget(
            name: packageName,
            url: remoteKotlinUrl,
            checksum: remoteKotlinChecksum
        )
        ,
    ]
)