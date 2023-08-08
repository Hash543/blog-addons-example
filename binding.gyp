{
    "targets": [{
        "target_name": "testaddon",
        "cflags!": [ "-fno-exceptions" ],
        "cflags_cc!": [ "-fno-exceptions" ],
        "mac_deployment_target": "13.5",
        "sources": [
            "cppsrc/main.cpp",
            "cppsrc/Samples/functionexample.cpp",
            "cppsrc/Samples/actualclass.cpp",
            "cppsrc/Samples/classexample.cpp"
        ],
        "include_dirs": [
            "<!@(node -p \"require('node-addon-api').include\")",
            "cppsrc/include"
        ],
        "libraries": [
            "-L<(module_root_dir)/cppsrc/lib",
            "libusb-1.0.0.a",
            "libpixiouvc.a",
        ],
        "dependencies": [
            "<!(node -p \"require('node-addon-api').gyp\")"
        ],
        "defines": [ "NAPI_DISABLE_CPP_EXCEPTIONS" ],
        "xcode_settings": {
          "MACOSX_DEPLOYMENT_TARGET": "13.5",
        },
    }]
}
