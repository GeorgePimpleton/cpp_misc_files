// "easy" menu utility

// modularized for C++20!

export module menu_toolkit;

import <iostream>;
import <string>;
import <vector>;
import <sstream>;

namespace MTK // (Menu Tool Kit)
{
   export void DisplayMenu(const std::vector<std::string>& stringArray)
   {
      std::cout << stringArray[0] << '\n';

      for (size_t i { 1 }; i < stringArray.size(); i++)
      {
         std::cout << " " << i << ") " << stringArray[i] << '\n';
      }
      std::cout << ": ";
   }

   export unsigned short Menu(const std::vector<std::string>& stringArray)
   {
      unsigned short response { };
      size_t         size { stringArray.size() - 1 };
      std::string    input { };

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
            std::cerr << "\n** INVALID CHOICE! **\n";
            DisplayMenu(stringArray);
         }

         if (response < 1 || response > size)
         {
            std::cerr << "\n** INVALID CHOICE! **\n";
         }
      }
      return response;
   }
}