#include "functions.h"


#ifndef FUNCTIONS
namespace Functions
{
    int generateRandom(int min, int max)
    {
        std::uniform_int_distribution random{ min, max }; // we can create a distribution in any function that needs it
	    return random(Constants::mersenne);              // and then generate a random number from our global generator
    }
    
    int getUserInput(std::string prompt)
    {
        int input{0};
        while(true)
        {
            cout<<prompt;
            cin>>input;
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
            }
            else
            {
                cin.ignore(32767, '\n');
                return input;
            }
        }
    }
    
    bool searchAndRemove(std::vector<int> &array, int guess)
    {
        auto found{ std::find(array.begin(), array.end(), guess) };
        if(found != array.end())
        {
            array.erase(found);
            return 1;
        }
        else
            return 0;
    }
    
    int nearest(std::vector<int> &array, int guess)
    {
        auto found{ std::find_if(array.begin(), array.end(),
                                 [&] (int closest) {
                                     return( std::abs(guess - closest) <= 4 );
                                 }) };
        return (found == array.end()) ? -1 : *found; 
    }
}
#define functions
#endif