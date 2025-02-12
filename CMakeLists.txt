cmake_minimum_required(VERSION 3.30)
project(raylib_imgui_template)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(extern/raylib)

file(GLOB main_SRC
        "src/*.cpp",
)

file(GLOB imgui_SRC
        "extern/imgui/*.cpp",
        "extern/imgui/*.h",
        "extern/imgui/misc/cpp/imgui_stdlib.cpp",
        "extern/imgui/misc/cpp/imgui_stdlib.h",
)

file(GLOB rlImGui_SRC
        "extern/rlImGui/*.cpp",
        "extern/rlImGui/*.h",
)

add_executable(raylib_imgui_template ${main_SRC} ${imgui_SRC} ${rlImGui_SRC})

target_include_directories(raylib_imgui_template PRIVATE extern/imgui/ extern/imgui/misc/cpp/)
target_include_directories(raylib_imgui_template PRIVATE extern/rlImGui/)

target_link_libraries(raylib_imgui_template raylib)
