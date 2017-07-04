import qbs 1.0

StaticLibrary {

    name: "parse"
    files: [
        "src/qparseobject.cpp",
        "src/qparseobject.h",
        "src/qparseuser.cpp",
        "src/qparseuser.h",
        "src/qparsequery.cpp",
        "src/qparsequery.h",
    ]
    cpp.cxxLanguageVersion: "c++11"
    cpp.includePaths: [
        "include",
        "src",
    ]
    cpp.defines: [
        "QT_DEPRECATED_WARNINGS",
    ]

    Depends { name: "cpp" }
    Depends {
        name: "Qt"
        submodules: ["core", "network"]
    }

    Export {
        Depends { name: "cpp" }
        cpp.defines: [ "USING_" + product.name.toUpperCase() ]
        cpp.includePaths: [
            product.sourceDirectory + "/src",
            product.sourceDirectory + "/include",
        ]
    }

}
