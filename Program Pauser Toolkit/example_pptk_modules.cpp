import <iostream>;

import program_pauser_toolkit;

int main()
{
   std::cout << "Hello World!\n";

   std::cout << "\nThis uses a (hopefully) platform independent program pauser library!\n";

   pause();

   std::cout << "\nUsing the class based pauser.....\n";

   PP pp;

   pp.Pause();

   std::cout << "\nWatch the class pause self destruct!!!!!\n";
}