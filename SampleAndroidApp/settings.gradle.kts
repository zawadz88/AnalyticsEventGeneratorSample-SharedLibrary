pluginManagement {
    repositories {
        google()
        //mavenLocal()
        mavenCentral()
        gradlePluginPortal()
    }
}
dependencyResolutionManagement {
    repositories {
        google()
        //mavenLocal()
        mavenCentral()
        maven {
            setUrl("https://maven.pkg.github.com/zawadz88/AnalyticsEventGenerator")
            name = "github"
            credentials(PasswordCredentials::class)
        }
    }
}

rootProject.name = "SampleAndroidApp"
include(":app")
