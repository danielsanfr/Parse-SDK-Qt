import qbs 1.0

Project {

    name: "Parse-SDK-Qt"
    minimumQbsVersion: "1.7.1"
    references: [
        "parse/parse.qbs",
        "tests/tests.qbs",
        "sample/sample.qbs",
    ]

}
