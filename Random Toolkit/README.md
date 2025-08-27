# The Random Numbers Toolkit (RTK)
![Static Badge](https://img.shields.io/badge/Language-C%2B%2B%2C%20C%2B%2B20%20%26%20C%2B%2B23-blue)

Makes using the C++ <random> library almost as easy as the C library random functions.  The idea is shamelessly stolen from "Random Number Generation in C++11 - WG21 N3551.pdf".

## Usage
There are two separate versions of the Random Toolkit: a pre C++20 header only version and a C++20 module interface file.  Use only one of the files!

See the example .cpp files for basic "how to" instructions.

The toolkit files used in the examples are v1.3.1.2.  

### Notes
There are two different versions of the toolkit.  v1.3.1 lets the toolkit use the WinAPI min/max functions, v1.3.1.2 shows how to disable the WinAPI min/max functions (#define NOMINMAX) and uses the C++ min/max functionality.  

v1.3.1.3 is for C++23 and currently will be a module file only.

The unversioned header/module interface files are v1.3.1.2.

There may be links to websites or internet sources in these pages. Links can go stale. A search engine is your friend.

If you find the files and examples useful let me know, if you find better ways to craft the code really let me know!

The file(s) are provided as-is, no warranty or suitability for use is even implied.

## Warning
The .cppm module interface file require using C++20 (or later) as your language standard.  Currently there is only one compiler/IDE that can use modules: Visual Studio 2022.

Use either the header or module interface file, do not use both!
