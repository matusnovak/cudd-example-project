# Cudd Example Project

[![CircleCI](https://circleci.com/gh/matusnovak/cudd-example-project.svg?style=svg)](https://circleci.com/gh/matusnovak/cudd-example-project) [![Build status](https://ci.appveyor.com/api/projects/status/6h7tx2wl2eqv71is?svg=true)](https://ci.appveyor.com/project/matusnovak/cudd-example-project) [![Build Status](https://travis-ci.org/matusnovak/cudd-example-project.svg?branch=master)](https://travis-ci.org/matusnovak/cudd-example-project)

This is a CMake based example project of [http://davidkebo.com/cudd](http://davidkebo.com/cudd). The provided `./configuration` in the original project works only on Linux. This example project **uses CMake** and works on all popular OS such as **Windows, Ubuntu, Debian, and Mac OSX**. It also works with any IDE, such as [**Clion**](https://www.jetbrains.com/clion/), [**Visual Studio**](https://visualstudio.microsoft.com/), [**Visual Studio Code**](https://code.visualstudio.com/), [**XCode**](https://developer.apple.com/xcode/), etc.).

**Works with the following compilers:** (Tested via Continuous Integration) Linux GCC 5.5, Linux GCC 6.4, Linux GCC 7.3, Linux GCC 8.3, Apple Clang 3.7, Microsoft Visual Studio 2013 Win32, Microsoft Visual Studio 2013 Win64, Microsoft Visual Studio 2015 Win32, Microsoft Visual Studio 2015 Win64, Microsoft Visual Studio 2017 Win32, Microsoft Visual Studio 2017 Win64, MinGW-w64 i686 v6.3.0, MinGW-w64 x86\_64 v6.3.0. And manually tested on Microsoft Visual Studio 2019 Win32, Microsoft Visual Studio 2019 Win64, and Mac OSX 10.13 with latest XCode.

## Why not ./configure?

The `./configure` is part of [AutoMake](https://www.gnu.org/software/automake/), a tool that was designed for Linux only. It is not wise to use this in 2019. The CMake is used by large companies such as Microsoft, Apple, etc. Even Netflix uses it! The learning curve is almost flat and only requires 3-4 mouse clicks to create a working build. The CMake is becoming the standard for building C++ software.

## Installation

See one of the markdown files listed here based on your OS and compiler:

* [Anything + Visual Studio Code](INSTALL_VSCODE.md)
* [Anything + Clion](INSTALL_CLION.md)
* [Windows + Visual Studio](INSTALL_MSVC.md)
* [Windows + MinGW no IDE](INSTALL_MINGW.md)
* [Linux + GCC no IDE](INSTALL_GCC.md)
* [Mac OSX + XCode](INSTALL_XCODE.md)
* [Mac OSX + no IDE](INSTALL_OSX.md)

Other IDEs not tested but should be working: [CodeBlocks](http://www.codeblocks.org/), [CodeLite](https://codelite.org/), [Kate](https://kate-editor.org/).

## Viewing dot files

Use the `xdot <filename>` on Linux (installed via `sudo apt install xdot -y`). Or Download GraphVix [from here](https://www.graphviz.org/download/) for Windows or Mac.

## How does this work?

The CMake will automatically download the `cudd-3.0.0.tar.gz` and extracts it in `libs/` folder. The sources are then processed via CMake and a static library is generated. CMake then allows you to choose [a generator](https://www.systutorials.com/docs/linux/man/7-cmake3-generators/) that specifies your programming environment, such as Visual Studio. Compilation and linking is all done by CMake for you. No need to get your hands dirty!

## FAQ

* **CMAKE_CXX_COMPILER not found** - Make sure you have installed a compiler. Double check by running `gcc --version` (Linux) or `clang --version` (OSX) or `x86_64-w64-mingw32-g++ --version` (Windows).
* **CMAKE_CXX_COMPILER not found when using XCode** - [Read this stackoverflow post](https://stackoverflow.com/questions/41380900/cmake-error-no-cmake-c-compiler-could-be-found-using-xcode-and-glfw).

## Having a problem?

Feel free to submit a ticket on [GitHub Issues](https://github.com/matusnovak/cudd-example-project/issues).

## Pull Requests

Pull requests are welcome!

## License

[The Unlicense](https://unlicense.org/). Do whatever you want. No credits required. You can sell this project if you want.

