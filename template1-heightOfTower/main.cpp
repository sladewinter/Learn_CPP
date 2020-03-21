/* Short program to simulate a ball being dropped off of a tower.
   The user should be asked for the height of the tower in meters.
   Normal gravity (9.8 m/s2), and that the ball has no initial velocity.
   The program outputs the height of the ball above the ground after 
   0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground. */
   
#include<iostream>
#include "constants.h" //Contains all symbolic constants used in our program
#include "functions.h" //Contains "forward declarations" of functions used in our program

//Note: All function definitions are in "functions.cpp"
//Functions used are defined in myFunc namespace 

using std::cout;           //Preferred use, avoid using namespace std

int main()
{
	const double tower_height{myFunc::get_user_input()};    //Height of the tower, shouldn't be changed once assigned

    //Current height of ball, initially same as tower height
	double ball_height{tower_height};           

	int x_seconds{0};                          //Gives current second, starts with 0
	
	//Either ball touches the ground, or we count till max_seconds
	while((ball_height >= 0) and (x_seconds <= constants::max_seconds)) 
	{
		ball_height = tower_height - myFunc::distance_fallen(x_seconds); //gives distance fallen based on current second 
		
		if(ball_height<0)
		{
			cout<<"At "<<x_seconds<<" seconds, the ball is on the ground.\n";
			return 0;
		}
	
		//Calculate height
		cout<<"At "<<x_seconds<<" seconds, the ball is at height: ";
		cout<<ball_height;
		cout<<" meters\n"; //At current second
		
		x_seconds += 1;                         //Update second
	}

	if(x_seconds <= constants::max_seconds)  //That means loop broke because height<0
		cout<<"At "<<x_seconds<<" seconds, the ball is on the ground.\n";
	
	return 0;
}
