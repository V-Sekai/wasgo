cmake_minimum_required(VERSION 3.13)
PROJECT(WasGo)
set(CMAKE_CXX_STANDARD 14)
set(WAMR_BUILD_AOT 1)
set(WAMR_BUILD_PLATFORM windows)
set(WAMR_BUILD_TARGET X86_64)
set(WAMR_BUILD_LIBC_BUILTIN 1)
set(WAMR_BUILD_LIBC_WASI 1)

# add this into your CMakeList.txt
include (./wasm-micro-runtime/build-scripts/runtime_lib.cmake)
add_library(vmlib ${WAMR_RUNTIME_LIB_SOURCE})