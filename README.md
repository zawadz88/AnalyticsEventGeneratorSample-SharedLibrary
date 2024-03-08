# Shared Analytics Library sample

This contains a sample library that uses the AnalyticsEventGenerator plugin to generate events from YAML files and send
them to a mock backend.

The library artifacts are published to Github Packages (Maven & NPM) and as a Cocoapod so that it can be used by
separate [Android](https://github.com/zawadz88/AnalyticsEventGeneratorSample-AndroidApp), [iOS](https://github.com/zawadz88/AnalyticsEventGeneratorSample-iOSApp) & [Web](https://github.com/zawadz88/AnalyticsEventGeneratorSample-ReactApp)
projects.

To build locally execute:

- `./gradlew assemble`

To publish to Github Packages execute:

- `./gradlew publish` (make sure you provided Personal Github tokens in `gradle.properties` file)

To publish a Pod for iOS:

- make sure you're using
  an [SSH key with Git](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
- update the version code in `build.gradle.kts`
- execute `./gradlew assemble`
- execute `./gradlew :podPublishReleaseXCFramework`
- copy `/build/cocoapods/publish/release/SharedAnalyticsLibrary.xcframework` to project root
- copy `/build/cocoapods/publish/release/shared_analytics_library.podspec` to project root
- commit changes and push to remote
- create and push a new tag e.g. `git tag '1.0.1` & `git push --tags`
- verify spec: `pod lib lint shared_analytics_library.podspec --allow-warnings`
- add a
  repo: `pod repo add AnalyticsGeneratorSampleSpecs https://github.com/zawadz88/AnalyticsEventGeneratorSample-Specs` (
  needed to execute just once)
- publish
  spec: `pod repo push AnalyticsGeneratorSampleSpecs shared_analytics_library.podspec --allow-warnings --verbose`
