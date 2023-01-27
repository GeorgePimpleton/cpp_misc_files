// Win32 SDK specific for clearing the console screen, modularized
// V1.0

module;

#include <windows.h>

export module clear_console_toolkit_1_0;

export void clear_screen(char fill = ' ')
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