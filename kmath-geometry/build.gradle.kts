plugins {
    id("scientifik.mpp")
}

kotlin.sourceSets.commonMain {
    dependencies {
        api(project(":kmath-core"))
        api(project(":kmath-dimensions"))
    }
}