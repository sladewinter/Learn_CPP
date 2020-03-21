#include "functions.h"
#include "constants.h"

namespace functions
{
    void bubblesort(int array[], int size)
    {
        bool swap_flag{0};
        for(int startIndex{size-1}; startIndex > 0; --startIndex)
        {
            swap_flag = 0;
            for(int currIndex{0}; currIndex  < startIndex; ++currIndex)
                if(array[currIndex]>array[currIndex + 1])
                {
                    std::swap(array[currIndex], array[currIndex + 1]);
                    swap_flag = 1; 
                }
            if(swap_flag == 0)
            {
                cout<<"Early termination on iteration "<<size - startIndex<<'\n';
                return;
            }
        }
    }
    
    void displayArray(int array[], int size)
    {
        for(int index{0}; index<size; ++index)
            cout<<array[index]<<' ';
        cout<<'\n';
    }
}
