/* user created functions and classes for flushing the input stream and pausing the program
 *
 * version 1.0.1a updated to not use underscore
 *
 * C++ Header: program_pauser_toolkit.hpp */

#ifndef PROGRAM_PAUSER_TOOLKIT
#define PROGRAM_PAUSER_TOLLKIT

#include <iostream>
#include <limits>

inline void pause()
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

class ProgramPauser
{
public:
     ProgramPauser() { }
    ~ProgramPauser() { Pause(); }

public:
   inline void Pause() const;
};

using PP = ProgramPauser;

inline void ProgramPauser::Pause() const
{
   pause();
}

#endif
