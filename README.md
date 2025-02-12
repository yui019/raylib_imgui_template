# Raylib ImGui template

This is a template project for working with Raylib and Dear ImGui.

It's set up so that it has [Raylib](https://github.com/raysan5/raylib), [Dear ImGui](https://github.com/ocornut/imgui/)
and [rlImGui](https://github.com/raylib-extras/rlImGui/) as git submodules, so you'll need to clone it recursively:

```shell
$ git clone --recurse-submodules https://github.com/yui019/raylib_imgui_template
```

The build system used is CMake, so the steps for building this project are:

```shell
$ mkdir build
$ cd build
$ cmake ..
$ make
$ ./raylib_imgui_template # Run it!!
```

Before you're able to do this, however, you will need the dependencies required for building raylib. You can read up on
that on the [raylib wiki](https://github.com/raysan5/raylib/wiki/).
