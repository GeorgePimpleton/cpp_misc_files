// header file to color text and background in Windows� console applications
// v1.0a

/* adapted and updated from the CPlusPlus article:

   https://cplusplus.com/articles/Eyhv0pDG/

*/

// modularized for C++20!

module;

#include <iosfwd>
#include <windows.h>

export module console_colors_toolkit;

using USHORT = unsigned short;

namespace ConCol
{
   export enum CONCOLOR
   {
      BLACK        = 0,
      DARK_BLUE    = 1,
      DARK_GREEN   = 2,
      DARK_AQUA    = 3, DARK_CYAN = 3,
      DARK_RED     = 4,
      DARK_PURPLE  = 5, DARK_PINK = 5, DARK_MAGENTA = 5,
      DARK_TYELLOW = 6,
      DARK_WHITE   = 7,
      GRAY         = 8,
      BLUE         = 9,
      GREEN        = 10,
      AQUA         = 11, CYAN = 11,
      RED          = 12,
      PURPLE       = 13, PINK = 13, MAGENTA = 13,
      YELLOW       = 14,
      WHITE        = 15
   };

   // standard output handle
   HANDLE std_con_out;

   // If ColorProtect is true, background and text colors will never be the same
   bool ColorProtect = false;

   /* TextCol    - current text color  *
    * BackCol    - current back color  *
    * DefTextCol - original text color *
    * DefBackCol - original back color */
   export CONCOLOR TextCol;
   export CONCOLOR BackCol;
   export CONCOLOR DefTextCol;
   export CONCOLOR DefBackCol;

   export void UpdateColors()
   {
      CONSOLE_SCREEN_BUFFER_INFO csbi;

      GetConsoleScreenBufferInfo(std_con_out, &csbi);

      TextCol = CONCOLOR(csbi.wAttributes & 15);
      BackCol = CONCOLOR((csbi.wAttributes & 0xf0) >> 4);
   }

   export void ConColInit()
   {
      std_con_out = GetStdHandle(STD_OUTPUT_HANDLE);

      UpdateColors();

      DefTextCol = TextCol;
      DefBackCol = BackCol;
   }

   export void SetColor(CONCOLOR textcolor, CONCOLOR backcolor)
   {
      if (ColorProtect == true && textcolor == backcolor)
      {
         return;
      }

      TextCol = textcolor;
      BackCol = backcolor;

      unsigned short wAttributes = (((USHORT) BackCol << 4) | (USHORT) TextCol);

      SetConsoleTextAttribute(std_con_out, wAttributes);
   }

   export void SetTextColor(CONCOLOR textcolor)
   {
      if (ColorProtect == true && textcolor == BackCol)
      {
         return;
      }

      TextCol = textcolor;

      unsigned short wAttributes = (((USHORT) BackCol << 4) | (USHORT) TextCol);

      SetConsoleTextAttribute(std_con_out, wAttributes);
   }

   export void SetBackColor(CONCOLOR backcolor)
   {
      if (ColorProtect == true && TextCol == backcolor)
      {
         return;
      }

      BackCol = backcolor;

      unsigned short wAttributes = (((USHORT) BackCol << 4) | (USHORT) TextCol);

      SetConsoleTextAttribute(std_con_out, wAttributes);
   }

   export template<class elem, class traits>
   std::basic_ostream<elem, traits>& operator<<(std::basic_ostream<elem, traits>& os, CONCOLOR col)
   {
      os.flush();
      SetTextColor(col);
      return os;
   }

   export template<class elem, class traits>
   std::basic_istream<elem, traits>& operator>>(std::basic_istream<elem, traits>& is, CONCOLOR col)
   {
      std::basic_ostream<elem, traits>* p = is.tie();

      if (p != NULL)
      {
         p->flush();
      }

      SetTextColor(col);
      return is;
   }
}
