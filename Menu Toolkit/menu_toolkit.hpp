// "simple and easy" menu utility
// v1.0

#ifndef MENU_TOOLKIT
#define MENU_TOOLKIT

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

namespace MTK // (Menu Toolkit)
{
   inline void DisplayMenu(const std::vector<std::string>& stringArray)
   {
      std::cout << stringArray[0] << '\n';

      for (size_t i { 1 }; i < stringArray.size(); i++)
      {
         std::cout << " " << i << ") " << stringArray[i] << '\n';
      }
      std::cout << ": ";
   }

   inline unsigned short Menu(const std::vector<std::string>& stringArray)
   {
      unsigned short response { };
      size_t         size     { stringArray.size() - 1 };
      std::string    input    { };

      while (response < 1 || response > size)
      {
         DisplayMenu(stringArray);

         while (std::getline(std::cin, input))
         {
            std::istringstream is { input };

            if ((is >> response) && !(is >> input)) // re-using 'input' to test for extra stuff after the number
            {
               break; // done, we got what we wanted
            }
            std::cerr << "\n** INVALID CHOICE! **\n\n";
            DisplayMenu(stringArray);
         }

         if (response < 1 || response > size)
         {
            std::cerr << "\n** INVALID CHOICE! **\n\n";
         }
      }
      return response;
   }
}

#endif
