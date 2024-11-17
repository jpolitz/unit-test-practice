#ifndef PRACTICE_H
#define PRACTICE_H

#include <string>

using std::string;

class Password
{
public:
  /*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
  */
  bool has_mixed_case(string);
};
#endif
