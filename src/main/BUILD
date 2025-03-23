cc_binary(
    name = "car_check",
    srcs = [
        "app.cpp",
        "app.h",
        "main.cpp",
    ],
    visibility = [
        "//src:__pkg__",
        "//tests:__pkg__",
    ],
    deps = [
        "//src/lib:CSVParser",
        "//src/lib:Log",
        "//src/lib:utils",
    ],
)

cc_library(
    name = "app",
    srcs = [
        "app.cpp",
        "app.h",
    ],
    visibility = [
        "//src:__pkg__",
        "//tests:__pkg__",
    ],
    deps = [
        "//src/lib:utils",
    ],
)
