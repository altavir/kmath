plugins {
    kotlin("jvm")
    id("ru.mipt.npm.gradle.common")
}

dependencies {
    api("org.ejml:ejml-ddense:0.40")
    api(project(":kmath-core"))
}

readme {
    maturity = ru.mipt.npm.gradle.Maturity.PROTOTYPE
    propertyByTemplate("artifact", rootProject.file("docs/templates/ARTIFACT-TEMPLATE.md"))

    feature(
        id = "ejml-vector",
        description = "Point implementations.",
        ref = "src/main/kotlin/space/kscience/kmath/ejml/EjmlVector.kt"
    )

    feature(
        id = "ejml-matrix",
        description = "Matrix implementation.",
        ref = "src/main/kotlin/space/kscience/kmath/ejml/EjmlMatrix.kt"
    )

    feature(
        id = "ejml-linear-space",
        description = "LinearSpace implementations.",
        ref = "src/main/kotlin/space/kscience/kmath/ejml/EjmlLinearSpace.kt"
    )
}
