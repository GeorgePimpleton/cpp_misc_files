// Win32 SDK specific for clearing the console screen

#ifndef CONSOLE_CLEAR_HPP
#define CONSOLE_CLEAR_HPP

#include <windows.h>

inline void clear_screen(char fill = ' ')
{
   COORD                      crd { 0,0 };
   CONSOLE_SCREEN_BUFFER_INFO csbi;
   HANDLE                     console { GetStdHandle(STD_OUTPUT_HANDLE) };
   GetConsoleScreenBufferInfo(console, &csbi);

   DWORD written;
   DWORD cells = csbi.dwSize.X * csbi.dwSize.Y;

   FillConsoleOutputCharacter(console, fill, cells, crd, &written);
   FillConsoleOutputAttribute(console, csbi.wAttributes, cells, crd, &written);

   SetConsoleCursorPosition(console, crd);
}

#endif
