// Console Colors demo
// Windows® only

// CAN'T disable language extensions, because.... Windows®

import <iostream>;

#include <windows.h>  // imports are NOT #includes!

import console_colors_toolkit;

int main()
{
   ConCol::ConColInit();

   char input[30];

   SetConsoleTitle(L"Console Colors");

   std::cout << ConCol::RED << "Hello\n\n";

   SetColor(ConCol::RED, ConCol::YELLOW);
   std::cout << "Hello2\n\n";

   SetColor(ConCol::WHITE, ConCol::DefBackCol);
   std::cout << "Hello3\n\n";

   SetTextColor(ConCol::BLUE);
   std::cout << "Enter a word ";

   std::cin >> ConCol::GREEN >> input;

   std::cout << ConCol::PINK << "\nYou entered " << ConCol::YELLOW << input << "\n";

   SetTextColor(ConCol::CYAN);
}