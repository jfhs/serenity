#!/bin/bash ../.port_include.sh
port=quickjs
version="2019-09-18"
useconfigure=false
configopts=""
files="https://bellard.org/quickjs/quickjs-2019-09-18.tar.xz quickjs-2019-09-18.tar.xz"

build() {
    #run_replace_in_file "s/define GETCWD_BROKEN 1/undef GETCWD_BROKEN/" config.h
    #run_replace_in_file "s/define CAN_REDEFINE_GETENV 1/undef CAN_REDEFINE_GETENV/" config.h
    export CONFIG_SERENITY=true
    run make $makeopts
}
