#include <iostream>

#include "program_pauser_toolkit.hpp"

int main()
{
   std::cout << "Hello World!\n";

   std::cout << "\nThis uses a (hopefully) platform independent program pauser library!\n";

   _pause();

   std::cout << "\nUsing the class based pauser.....\n";

   PP pp;

   pp._Pause();

   std::cout << "\nWatch the class pause self destruct!!!!!\n";
}