#include "functions.h"
#include "constants.h"

int main()
{
    const int size{functions::getSizeInput()};         //Get size of array from user
    
    std::string *names{ new std::string[size]{} };   //Create an array of strings dynamically
    
    functions::getNamesInput(names, size);         //Take input from user the names to fill in the array
    
    //functions::sortNames(names, size);         //Our own BubbleSort to work with strings instead of numeric types
    
    std::sort(names, names + size);            //But we will use std::sort just for optimal performance
    
    cout<<"Here is your sorted list:\n"; 
    
    functions::displayNames(names, size);  //Display the sorted names
    
    delete[] names;                     //Free up dynamically allocated space
    
    return 0;
}
