import qbs 1.0

Project {

    TestApplication {
        name: "all_tests"
        cpp.defines: base.concat("ALL_TESTS")
    }

    TestApplication {
        name: "test_parse_object"
        cpp.defines: base.concat("TEST_PARSE_OBJECT")
    }

    TestApplication {
        name: "test_parse_user"
        cpp.defines: base.concat("TEST_PARSE_USER")
    }

    TestApplication {
        name: "test_parse_query"
        cpp.defines: base.concat("TEST_PARSE_QUERY")
    }

}
