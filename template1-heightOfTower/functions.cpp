//This header file will hold forward declarations for all the user-defined functions in our program 

#include<iostream>
#include "functions.h"   //Best practice is to include header for this corresponding cpp file
#include "constants.h"
#include<cmath>         //For std::pow
#include<cstdint>       //For std::int_fast64_t

namespace myFunc{

double get_user_input()                 //Takes input from user height of the tower
{
	int tower_height{0};                                     //To take user input
	std::cout<<"Enter the height of the tower in meters: ";  //Prompt the user
	std::cin>>tower_height;                                  //Take input
	return static_cast<double>(tower_height);              //Return height of tower
}


double distance_fallen(int x_seconds)   //returns distance fallen based on current second 
{
//	return ((constants::gravity * std::pow(x_seconds,2)) / 2);
//Instead of using std::pow which takes double parameters and returns double, we can write our own int pow function
	return ((constants::gravity * myFunc::pow(x_seconds,2)) / 2);
}


std::int_fast64_t pow(int base, int exp)    //Forward declaration in functions.h
{
	int_fast64_t result{1}; //Gives fastest signed integer type of atleast 64bits

	while(exp)             //While exponent has not zeroed out
	{
		if(exp & 1)      //Bitwise AND says if LSB of exp is 1
			result *= base;                  //If LSB was 1, we multiply by 2 and add 1, adding exp 1 after squaring
			
		exp >>= 1;    //Right shift exp
		base *= base;                      //Else we just multiply by 2, in exponentiation equal to squaring
	}
	return result;
}

}
