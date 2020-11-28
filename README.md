# spells
Easy steps for Learning C++

First we'll need to get CMake. Download it from https://cmake.org/download/

If you install this, open the Terminal application:
type: `which cmake`
and this should print out something like:
/usr/local/bin/cmake

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


