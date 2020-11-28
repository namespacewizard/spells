# spells
Easy steps for Learning C++


This tutorial is a big branch.
To get started you need to copy it to your computer.
Open terminal, find a directory (folder) and type
`cd <name-of-folder>` or type `cd` and drag your folder in.
Then type
`git clone https://github.com/namespacewizard/spells.git`

You should also get git gui
https://git-scm.com/downloads

We will need a compiler:
type `gcc --version`
and download this if it's needed.

XCode is very helpful here:
https://developer.apple.com/xcode/
you can download the command line tools, some advice from a guide:
https://www.embarcadero.com/starthere/berlin/mobdevsetup/ios/en/installing_xcode_on_a_mac.html


# spell 1.0
Then checkout the first learning with
`git checkout spell1.0`

To run Spell 1.0:
`cd src`

To compile the first spell we need to type:
`g++ -o hello src/main.cpp`

This builds an object (-o for object) called `hello` from the C++ file `main.cpp`

To run the program:
`./hello`

This should print out something below hello...

# spell 1.1

Lets' try to build with CMake to make it easier to build and run the program:

First we'll need to get CMake. Download it from https://cmake.org/download/
https://ncona.com/2019/03/building-a-cpp-project-with-cmake/

If you install this, open the Terminal application:
type: `which cmake`
and this should print out something like:
`/usr/local/bin/cmake`

We need to make a special folder ourselves
In Terminal type the following:
`mkdir build` (to make the folder)
`cd build` (to change directory to the folder called build)
`cmake ..` (to configure CMake to be ready to build the program)

You should see:
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/<you>/Programming/namespacewizard/spells/build

`make` to build the program
[ 50%] Building CXX object CMakeFiles/Spell.dir/src/main.cpp.o
[100%] Linking CXX executable Spell
[100%] Built target Spell

`./Spell` to run the program which should print a message.


You can also type
`cmake .. -GXcode`

output:
-- Configuring done
-- Generating done
-- Build files have been written to: /Users/<you>/Programming/namespacewizard/spells/build

to create an XCode Project that can be opened
`open Spell1.xcodeproj`

and hit the Play button called Run in the top left corner. This will build and run the program and you should see a message below.
