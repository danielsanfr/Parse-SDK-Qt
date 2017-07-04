import qbs 1.0

Application {

    name: "sample"
    files: [
        "main.cpp",
    ]
    cpp.cxxLanguageVersion: "c++11"
    cpp.defines: [
        "QT_DEPRECATED_WARNINGS",
    ]

    Depends { name: "parse" }
    Depends { name: "cpp" }
    Depends { name: "Qt"; submodules: ["core", "network"] }

}
