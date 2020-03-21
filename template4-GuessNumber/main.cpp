#include "functions.h"

int main()
{   
    int base{ Functions::getUserInput("Start where? ") };
    
    int count{ Functions::getUserInput("How many? ") };
    
    int random{ Functions::generateRandom(2, 4) };
    
    std::vector<int> array(count);
    for(int iter{0}; iter<count; ++iter)
        array[iter] = std::pow(base + iter, 2) * random;
    
    int guess{ Functions::getUserInput("I generated " + std::to_string(count)
             + " square numbers. Do you know what each number is after multiplying it by " + std::to_string(random) + "?\n") };
    
    for(int iter{count - 1}; iter > 0; --iter)
    {
        if( Functions::searchAndRemove(array, guess) )
        {
            guess = Functions::getUserInput("Nice! " + std::to_string(iter) +" number(s) left.\n");
            
        }
        else
        {
            int nearest{ Functions::nearest(array, guess) };
            if(nearest != -1)
                cout<<guess<<" is wrong! Try "<<nearest<<" next time.\n";
            return 0;
        }
    }
    cout<<"Nice! You found all numbers, good job!\n";
    return 0;
}
