#include "Password.h"
#include <string>
#include <cctype>

using std::string;

/*
  receives a string and returns whether it has both at least one upper-case
  letter and at least one lower-case letter
*/
//bool Password::has_mixed_case(string pass){
//  return false;
//}

// Refactored versions:

// VERSION A
bool Password::has_mixed_case(string str)
{
  int count_lower = 0;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      count_lower++;
    }
  }
  return count_lower > 0 && count_lower < str.length();
}


/* VERSION B
bool Password::has_mixed_case(string str)
{
  bool found = false;
  for(char c : str){
    if( !found && c >= 'A' && c <= 'Z' ){
      found = true;
    }
    else if( found && c >= 'a' && c <= 'z'){
      return true;
    }
  }
  return false;
}
*/
