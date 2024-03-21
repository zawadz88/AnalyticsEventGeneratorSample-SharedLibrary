# Shared Analytics Library sample

This contains a sample library that uses the AnalyticsEventGenerator plugin to generate events from YAML files and send
them to a mock backend.

The library artifacts are published to Github Packages (Maven,
NPM & [KMMBridge](https://touchlab.co/kmmbridge-quick-start) to Maven for SPM) so that it can be used
by
separate [Android](https://github.com/zawadz88/AnalyticsEventGeneratorSample-AndroidApp), [iOS](https://github.com/zawadz88/AnalyticsEventGeneratorSample-iOSApp) & [Web](https://github.com/zawadz88/AnalyticsEventGeneratorSample-ReactApp)
projects.

To build locally execute:

- `./gradlew assemble`

To publish to Github Packages execute:

- `./gradlew publish` (make sure you provided Personal Github tokens in `gradle.properties` file)

For iOS, make sure to create a Git tag and push it - SPM will look at tags in XCode.
