#include "functions.h"
#include "constants.h"

int main()
{
    int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    
    const int size{std::size(array)};
    
    cout<<"Before sorting, the array is...\n";
    functions::displayArray(array, size);
    
    functions::bubblesort(array, size);
    
    cout<<"After sorting, the array is...\n";
    functions::displayArray(array, size);

    return 0;
}
