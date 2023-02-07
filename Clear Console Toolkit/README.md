# The Clear Console Toolkit
[![Language](https://img.shields.io/badge/Language-C%2B%2B%20%26%20C%2B%2B20%2C%20Win32-blue)](https://github.com/GeorgePimpleton/misc_files/)

A Win32 API library to clear the contents of a console mode window.  This was more about experimentation, not doing something useful.  That is why I keep v1.0 and v1.1 available.

## Versions
- V1.0 - Uses outdated WinAPI functions, don't use.
- V1.1 - MS recommended use of virtual terminal sequences, use this.

## Usage
There are two separate versions of the Clear Console Toolkit for each version: a pre C++20 header only version and a C++20 module interface file.  Use only one of the files!

See the example .cpp files for basic "how to" instructions.

### Notes
There may be links to websites or internet sources in these pages. Links can go stale. A search engine is your friend.

If you find the files and examples useful let me know, if you find better ways to craft the code really let me know!

The file(s) are provided as-is, no warranty or suitability for use is even implied.

## Warning
The .cppm module interface file require using C++20 (or later) as your language standard.  Currently there is only one compiler/IDE that can use modules: Visual Studio 2022.

Use either the header or module interface file, do not use both!
