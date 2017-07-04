import qbs 1.0

Application {

    name: "tests"
    files: [
        "main.cpp",
        "qparseobjecttest.cpp",
        "qparseobjecttest.h",
        "qparsequerytest.cpp",
        "qparsequerytest.h",
        "qparseusertest.cpp",
        "qparseusertest.h",
    ]
    cpp.cxxLanguageVersion: "c++11"
    cpp.defines: [
        "QT_DEPRECATED_WARNINGS",
    ]

    Depends { name: "parse" }
    Depends { name: "cpp" }
    Depends { name: "Qt"; submodules: ["core", "network", "testlib"] }

}
