/* Instead of including system header files and using statements everywhere 
   we just include them here and include this header in all .cpp files instead */
    
#include<iostream>     //for std::cout and std::cin
#include<string>      //for std::string
#include<algorithm>  //for std::sort

using std::cin;
using std::cout;

/* This namespace contain only Forward Declarations, and not Definitions for
    all our user-defined functions. So we dont need Header Guard here. */
namespace functions
{
    int getSizeInput();
    
    void getNamesInput(std::string *names, int size);
    
    void sortNames(std::string *names, int size);
    
    void displayNames(std::string *names, int size);
}
