// swift-tools-version:5.3
import PackageDescription

// BEGIN KMMBRIDGE VARIABLES BLOCK (do not edit)
let remoteKotlinUrl = "https://maven.pkg.github.com/zawadz88/AnalyticsEventGeneratorSample-SharedLibrary/dev/zawadzki/sharedanalyticslibrary/shared-analytics-library-kmmbridge/1.0.11/shared-analytics-library-kmmbridge-1.0.11.zip"
let remoteKotlinChecksum = "f9a8f8fe409e03e6c2f66a6da981f06dcf6a6415d0440ceb668a114030b097af"
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