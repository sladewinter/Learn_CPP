/* Instead of including header files and using statements everywhere 
   we just include them here and include this header in all .cpp files instead */
    
#include "definitions.h"

using std::cin;
using std::cout;

/* This namespace contain only Forward Declarations, and not Definitions for
    all our user-defined functions. So we dont need Header Guard here. */
namespace Functions
{
    int getUserInput(std::string prompt = "");
    
    int generateRandom(int min, int max);
    
    bool searchAndRemove(std::vector<int> &array, int guess);
    
    int nearest(std::vector<int> &array, int guess);
}
