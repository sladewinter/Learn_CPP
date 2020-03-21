#include "functions.h"
#include "constants.h"

namespace functions
{
    int getSizeInput()
    {
        int size{0};
        while(true)
        {
            cout<<"How many names do you wish to enter? : ";
            cin>>size;
            
        /* Implement error handling */
        
            if(cin.fail())                      //cin has silently failed
            {
                cin.clear();                  //bring back cin to life
                cin.ignore(32767,'\n');      //clear the bad input
            }
            else                           //cin is successful
            {
                cin.ignore(32767,'\n');  //but buffer may contain extraneous characters after extraction
                return size;
            }
        }
    }
    
    void getNamesInput(std::string *names, int size)
    {
        for(int index{0}; index<size; ++index)
        {
        
        /* Implement error handling for each input */
            while(true)
            {
                cout<<"Enter name #"<<index + 1<<": ";
                cin>>names[index];
                if(cin.fail())
                {
                    cin.clear();
                    cin.ignore(32767,'\n');
                }
                else
                {
                    cin.ignore(32767,'\n');
                    break;
                }
            }
            
        }
        
    }
    
    /* Our own bubblesort on strings. Note: std::string supports comparision(<,>,etc.)
       operators just like numeric types */
    void sortNames(std::string *names, int size)
    {
        bool swap_flag{0};
        for(int startIndex{size-1}; startIndex > 0; --startIndex)
        {
            swap_flag = 0;
            for(int currIndex{0}; currIndex  < startIndex; ++currIndex)
                if(names[currIndex]>names[currIndex + 1])
                {
                    std::swap(names[currIndex], names[currIndex + 1]);
                    swap_flag = 1; 
                }
            if(swap_flag == 0)
                return;
        }
    }
    
    void displayNames(std::string *names, int size)
    {
        for(int index{0}; index<size; ++index)
            cout<<"Name #"<<index + 1<<": "<<names[index]<<'\n';
    }
 
}
