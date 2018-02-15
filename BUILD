cc_proto_library(
    name = "cc_descriptor_proto",
    deps = ["@com_google_protobuf//:descriptor_proto"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    linkstatic = 0,
    deps = [":cc_descriptor_proto"],
)
