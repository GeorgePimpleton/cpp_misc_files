# The Program Pauser Toolkit
[![Language](https://img.shields.io/badge/Language-C%2B%2B%20%26%20C%2B%2B20-blue)](https://github.com/GeorgePimpleton/misc_files/)

A header-only file, use to prevent console mode apps from automatically closing when the program ends.  There's a stand-alone function and a class object available.

## Usage
There are two separate versions of the Program Pauser Toolkit: a pre C++20 header only version and a C++20 module interface file.  Use only one of the files!

See the example .cpp files for basic "how to" instructions.

### Notes
There may be links to websites or internet sources in these pages. Links can go stale. A search engine is your friend.

If you find the files and examples useful let me know, if you find better ways to craft the code really let me know!

The file(s) are provided as-is, no warranty or suitability for use is even implied.

### C++ Correctness Warning
~~This toolkit knowingly violates a suggested guideline of never having an identifier begin with a single or double underscore.  That's what happens when code snippets are crafted for personal - use only and are never intended for public consumption.~~

This defect has been corrected in 1.0.1a

## Warning
The .cppm module interface file require using C++20 (or later) as your language standard.  Currently there is only one compiler/IDE that can use modules: Visual Studio 2022.

Use either the header or module interface file, do not use both!
