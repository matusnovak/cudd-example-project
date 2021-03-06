# Install for Visual Studio Code

Make sure you download [**Visual Studio Code**](https://code.visualstudio.com/) which is available on Windows, Linux, or OSX. Then, make sure you have cmake installed as well. You can install it via `sudo apt install cmake cmake-gui -y` or from [here](https://cmake.org/download/#latest).

Please note: On Windows, you will need to download a compiler, use [MinGW](https://sourceforge.net/projects/mingw-w64/) or [Visual Studio](https://visualstudio.microsoft.com/). On Linux, install gcc via `sudo apt install build-essential`. On Mac OSX, install [XCode](https://developer.apple.com/xcode/) or [Clang via Homebrew](https://embeddedartistry.com/blog/2017/2/20/installing-clangllvm-on-osx)

Need help installing Visual Studio Code on Linux? [Try this post](https://linuxize.com/post/how-to-install-visual-studio-code-on-ubuntu-18-04/).

## VS Code extensions

Install the `CMake Tools` extension.

![screenshot](screenshots/vscode_ext.png)

## Download and install

Download this project [as a zip file](https://github.com/matusnovak/cudd-example-project/archive/master.zip) or clone it via `git clone https://github.com/matusnovak/cudd-example-project`.

### Step 1.

Open it via Visual Studio Code.

![screenshot](screenshots/vscode_00.png)

### Step 2.

Press `[Ctrl]+[P]` on your keyboard to bring up the VS Code action bar, and type `cmake` and select `Cmake: Configure`.

![screenshot](screenshots/vscode_01.png)

If you get the following (see screenshot below), simply select `[Scan for kits]`

![screenshot](screenshots/vscode_kits.png)

And sleect your desired compiler. If you are running on Linux or OSX, you may get only one option.

TL;DR:
* i686 -> 32bit program
* x86 -> 32bit program
* amd64 -> 64bit program
* amd64_x86 -> 64bit program

![screenshot](screenshots/vscode_03.png)

On Linux as below, (Don't use c89 or c99! That will force the compiler to use C++ 1989/1999 standard).

![screenshot](screenshots/vscode_03b.png)

And this is the expected output:

![screenshot](screenshots/vscode_04.png)

### Step 3.

Press `[Ctrl]+[P]` again, and type `cmake build` and select the first option.

![screenshot](screenshots/vscode_05.png)

You will see something like this:

![screenshot](screenshots/vscode_06.png)

### Step 4.

Run the example. Simply, bring up the terminal. (At the top of the windows, in Visual Studio Code, select `Terminal -> New Terminal`). Once the terminal is open, navigate to the `build` directory and run the executable.

![screenshot](screenshots/vscode_07.png)

The dot files will be located in your current working directory. So, if you are in `cudd-example-project/build`, they will appear over there!

![screenshot](screenshots/vscode_08.png)
