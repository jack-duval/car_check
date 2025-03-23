cc_test(
    name = "test_app",
    srcs = [
        "test_app.cpp",
    ],
    deps = [
        "//src/main:app",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "test_db_manager",
    srcs = [
        "test_db_manager.cpp",
    ],
    deps = [
        "//src/modules/db_manager",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)

cc_test(
    name = "test_event",
    srcs = [
        "test_event.cpp",
    ],
    deps = [
        "//src/lib:event",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
