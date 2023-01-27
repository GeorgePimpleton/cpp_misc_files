// Win32 SDK specific for clearing the console screen
// V1.1

// adapted from https://learn.microsoft.com/en-us/windows/console/clearing-the-screen

#ifndef CONSOLE_CLEAR_HPP
#define CONSOLE_CLEAR_HPP

#include <windows.h>

inline void clear_screen()
{
   HANDLE hStdOut { GetStdHandle(STD_OUTPUT_HANDLE) };

   // Fetch existing console mode so we correctly add a flag and not turn off others
   DWORD mode { };
   if ( !GetConsoleMode(hStdOut, &mode) )
   {
      return; //::GetLastError();
   }

   // Hold original mode to restore on exit to be cooperative with other command-line apps.
   const DWORD originalMode = mode;
   mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;

   // Try to set the mode.
   if ( !SetConsoleMode(hStdOut, mode) )
   {
      return; // ::GetLastError();
   }

   // Write the sequence for clearing the display.
   DWORD  written  { };
   PCWSTR sequence { L"\x1b[2J" };
   if ( !WriteConsoleW(hStdOut, sequence, (DWORD) wcslen(sequence), &written, NULL) )
   {
      // If we fail, try to restore the mode on the way out.
      SetConsoleMode(hStdOut, originalMode);
      return; //::GetLastError();
   }

   // To also clear the scroll back, emit L"\x1b[3J" as well.
   // 2J only clears the visible window and 3J only clears the scroll back.
   written  = 0;
   sequence = L"\x1b[3J";
   if ( !WriteConsoleW(hStdOut, sequence, (DWORD) wcslen(sequence), &written, NULL) )
   {
      // If we fail, try to restore the mode on the way out.
      SetConsoleMode(hStdOut, originalMode);
      return; //::GetLastError();
   }

   // Restore the mode on the way out to be nice to other command-line applications.
   SetConsoleMode(hStdOut, originalMode);
}

#endif