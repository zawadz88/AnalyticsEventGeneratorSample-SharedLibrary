// swift-tools-version:5.3
import PackageDescription

// BEGIN KMMBRIDGE VARIABLES BLOCK (do not edit)
let remoteKotlinUrl = "https://maven.pkg.github.com/zawadz88/AnalyticsEventGeneratorSample-SharedLibrary/dev/zawadzki/sharedanalyticslibrary/shared-analytics-library-kmmbridge/1.0.10/shared-analytics-library-kmmbridge-1.0.10.zip"
let remoteKotlinChecksum = "84d7d828504bdb34f466f4bd2736fecc2c0386406a00e8d09613fea283906c4e"
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