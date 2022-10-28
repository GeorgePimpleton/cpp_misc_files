# Miscellaneous custom C++ library files

[![Language](https://img.shields.io/badge/Language-C%2B%2B%20%26%20C%2B%2B20-blue)](https://github.com/GeorgePimpleton/misc_files/)

### C++ ISO Committee working group papers on C++11's random library.

+ Random Number Generation in C++11 - WG21 N3551.pdf
    
+ Three random-related Proposals - WG21 N3547

### The code snippets

A collection of custom C++ header-only/module interface files I created for doing simple tasks.  .hpp & .cppm  Add the file(s) to your project and code away using the supplied functionality.  The file descriptions should be self evident, but....

The code snippets now have some simple example code to show how to use the libraries.

1. The Random Toolkit - Makes using the C++ random library almost as easy as the C library random functions.

2. Menu Toolkit - A simple menu system to get numeric input based on a collection of C++ strings used for the menu options

3. Program Pauser Toolkit - Use to prevent console mode apps from automatically closing when the program ends.  There's a stand-alone function and a class object available.

4. Console Colors Toolkit - Win32 API library so a console mode app can be colorful.

5. Console Clear Toolkit - Win32 API library to clear the contents of a console mode window.

### Other stuff

There is a freeware custom icon file, Console.ico, you can add to your Win32 apps.

### Notes

There may be links to websites or internet sources in these pages. Links can go stale. A search engine is your friend.

If you find the files and examples useful let me know, if you find better ways to craft the code really let me know!

## Warning

The .cppm module interface files require using C++20 (or later) as your language standard.  Currently there is only one compiler/IDE that can use modules: Visual Studio 2022.

Use either the header or module interface file, do not use both!
