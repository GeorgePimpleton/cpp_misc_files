# Miscellaneous custom C++ library files
![Static Badge](https://img.shields.io/badge/Language-C%2B%2B%2C%20C%2B%2B20%20%26%20C%2B%2B23%20%26%20Win32-blue)

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
There is a freeware custom icon file, Console.ico, you can add to your Win32 apps as well as a couple of PDF books I have found useful: Pro Git, 2nd Edition and The Markdown Guide.

### Notes
There may be links to websites or internet sources in these pages. Links can go stale. A search engine is your friend.

These files were originally created for my own use, as learning projects.  They were not created to share.  If you find the files and examples useful let me know; if you find better ways to craft the code really do let me know!

The file(s) are provided as-is, no warranty or suitability for use is even implied.

I updated the repo name to be clearly what these files are for, C++ files.  Duh!

## Warning
The .cppm module interface files require using C++20 (or later) as your language standard.  Currently (11 December 2022) there is only one compiler/IDE that can use modules: Visual Studio 2022.  Module support is still iffy for other compiler suites, though that is gradually changing.

Use either the header or module interface file, do not use both!
