import dev.zawadzki.analyticseventgenerator.plugin.AnalyticsExtension
import dev.zawadzki.analyticseventgenerator.plugin.GenerateAnalyticsEventsTask
import org.jetbrains.kotlin.gradle.dsl.JvmTarget
import org.jetbrains.kotlin.gradle.tasks.AbstractKotlinCompile
import org.jetbrains.kotlin.gradle.tasks.AbstractKotlinNativeCompile

group = "dev.zawadzki.sharedanalyticslibrary"
version = libs.versions.sharedAnalyticsLibrary.get()

// TODO: add info how to develop locally
//buildscript {
//    dependencies {
//        classpath(libs.event.plugin)
//    }
//}
plugins {
    alias(libs.plugins.npmPublish)
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.androidLibrary)
    alias(libs.plugins.kotlinx.serialization)
    alias(libs.plugins.eventGenerator)
    `maven-publish`
    alias(libs.plugins.kmmBridge)
}

val analyticsExtension = the<AnalyticsExtension>().apply {
    prefix.set("Sample")
    packageName.set("dev.zawadzki.sharedanalyticslibrary.event")
    inputFiles.setFrom(projectDir.resolve("src/eventDefinitions").listFiles())
    inputFiles.from(layout.projectDirectory.file("src/additionalEventDefinitions/sample.yaml"))
}

tasks.matching {
    it is AbstractKotlinCompile<*> || it is AbstractKotlinNativeCompile<*, *> || it.name.endsWith(
        "SourcesJar",
        ignoreCase = true
    )
}
    .configureEach { dependsOn(tasks.withType<GenerateAnalyticsEventsTask>()) }

kotlin {
    androidTarget {
        publishLibraryVariants("release")
        compilations.all {
            kotlinOptions {
                jvmTarget = JvmTarget.JVM_1_8.target
            }
        }
    }
    js {
        browser()
        binaries.library()
        generateTypeScriptDefinitions()
    }

    listOf(
        iosX64(),
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = "SharedAnalyticsLibrary"
            isStatic = true
        }
    }

    sourceSets {
        commonMain.configure {
            kotlin.srcDirs(analyticsExtension.outputDirectory)
        }
        commonMain.dependencies {
            api(libs.event.runtime)
            implementation(libs.kotlinx.datetime)
            implementation(libs.kotlinx.coroutines)
            implementation(libs.ktor.client.core)
            implementation(libs.ktor.client.content.negotiation)
            implementation(libs.ktor.serialization.kotlinx.json)
        }
        androidMain.dependencies {
            implementation(libs.ktor.client.okhttp)
        }
        jsMain.dependencies {
            implementation(libs.ktor.client.js)
        }
        iosMain.dependencies {
            implementation(libs.ktor.client.darwin)
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }
        all {
            languageSettings.apply {
                optIn("kotlin.js.ExperimentalJsExport")
            }
        }
    }
}

kmmbridge {
    mavenPublishArtifacts()
    manualVersions()
    spm(spmDirectory = ".")
}

android {
    namespace = "dev.zawadzki.sharedanalyticslibrary"
    compileSdk = libs.versions.android.compileSdk.get().toInt()
    defaultConfig {
        minSdk = libs.versions.android.minSdk.get().toInt()
    }
}

publishing {
    repositories {
        maven {
            name = "publishing"
            url = uri("https://maven.pkg.github.com/zawadz88/AnalyticsEventGeneratorSample-SharedLibrary")
            credentials(PasswordCredentials::class)
        }
    }
}

npmPublish {
    organization.set("zawadz88")
    packages {
        named("js") {
            packageJson {
                author {
                    name.set("Piotr Zawadzki")
                }
                repository {
                    type.set("git")
                    url.set("https://github.com/zawadz88/AnalyticsEventGeneratorSample-SharedLibrary")
                }
            }
        }
    }
    registries {
        github {}
    }
}
