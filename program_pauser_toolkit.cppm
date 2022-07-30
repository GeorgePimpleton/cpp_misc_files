/* user created functions and classes for flushing the input stream and pausing the program
 *
 * version 1.0 (not likely to change or be modularized)
 *
 * modularized for the 'halibut'
 *
 * C++ Header: program_pauser_toolkit.cppm */

export module program_pauser_toolkit;

import <iostream>;
import <limits>;

export void pause()
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

export class ProgramPauser
{
public:
    ProgramPauser() { }
   ~ProgramPauser() { Pause(); }

public:
   void Pause() const;
};

export using PP = ProgramPauser;

void ProgramPauser::Pause() const
{
   pause();
}