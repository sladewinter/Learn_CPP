/* Our global constant variables, standard libraries user-defined datatypes
   Simpler just to attach header guard to a namespace instead of each definition*/

#include<iostream>     //for std::cout and std::cin
#include<functional> //for std::function


#ifndef CUSTOM           //All our user-defined datatypes shall be defined here
namespace Custom
{

}
#define CUSTOM
#endif

#ifndef CONSTANTS          //All our constants shall be defined here
namespace Constants
{

}
#define CONSTANTS
#endif
