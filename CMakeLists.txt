cmake_minimum_required(VERSION 3.12)

# Pull in PICO SDK (must be before project)
include(pico_sdk_import.cmake)

project(blink C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

set(PICO_SOURCE_CODE_PATH $(PROJECT_SOURCE_DIR)/src)

# Initialize the SDK
pico_sdk_init()

add_executable(bager src/main.c)
target_include_directories(bager PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Pull in our pico_stdlib which pulls in common libraries
target_link_libraries(bager pico_stdlib ${CMAKE_SOURCE_DIR}/lib/libbager_lib.a)

# Create map/bin/hex file etc.
pico_add_extra_outputs(bager)

pico_enable_stdio_usb(bager 1)
pico_enable_stdio_uart(bager 1)
