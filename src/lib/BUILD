cc_library(
    name = "utils",
    srcs = ["utils.cpp"],
    hdrs = ["utils.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "event",
    srcs = ["event.cpp"],
    hdrs = ["event.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "fault",
    srcs = ["fault.cpp"],
    hdrs = ["fault.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "CSVParser",
    srcs = ["CSVParser.cpp"],
    hdrs = ["CSVParser.h"],
    visibility = ["//visibility:public"],
    deps = ["//src/lib:TickEntry"],
)

cc_library(
    name = "TickEntry",
    srcs = ["TickEntry.cpp"],
    hdrs = ["TickEntry.h"],
    visibility = ["//visibility:public"],
    deps = ["//src/lib:Variable"],
)

cc_library(
    name = "Variable",
    srcs = ["Variable.cpp"],
    hdrs = ["Variable.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "Log",
    srcs = ["Log.cpp"],
    hdrs = ["Log.h"],
    visibility = ["//visibility:public"],
    deps = [
        "//src/lib:CSVParser",
        "//src/lib:TickEntry",
        "//src/lib:Variable",
    ],
)
