/* Our global constant variables, standard libraries user-defined datatypes
   Simpler just to attach header guard to a namespace instead of each definition*/
    
#include <iostream>     //for std::cout and std::cin
#include <vector>      // for std::vector
#include <algorithm>  //  for std::shuffle()
#include <ctime>     //   for std::time
#include <cmath>    //    for std::pow()
#include <random>  //     for std::mt19937

#ifndef CUSTOM           //All our user-defined datatypes shall be defined here
namespace Custom
{
    
}
#define CUSTOM
#endif

#ifndef CONSTANTS          //All our constants shall be defined here
namespace Constants
{
    inline std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
}
#define CONSTANTS
#endif