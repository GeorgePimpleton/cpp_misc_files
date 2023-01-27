#include <iostream>

void _pause()
{
   std::cout << "\nPress ENTER to continue...";

   // clear any previous errors in the input stream
   std::cin.clear();

   // synchronize the input buffer stream
   std::cin.sync();

   // extract and discard the max number of characters
   // until an endline character is reached
   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

#include "clear_console_toolkit_1.1.hpp"

int main()
{
   std::cout << "Hello World!\n";

   _pause();

   clear_screen();
}