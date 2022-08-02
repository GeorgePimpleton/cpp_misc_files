import <iostream>;
import <string>;
import <vector>;

import menu_toolkit;

int main()
{
   std::vector<std::string> example = { "Your choices are:", "Attack", "Retreat" };

   unsigned short choice = MTK::Menu(example);

   std::cout << "\nYou chose: " << example[choice] << '\n';
}