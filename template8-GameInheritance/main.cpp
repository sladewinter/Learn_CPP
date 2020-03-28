#include <iostream>
#include <string>
#include "creature.h"
#include "player.h"
#include "functions.h"

using std::cout;
using std::cin;

int main()
{
	cout << "Enter your name: ";
	std::string name{};
	cin >> name;
	Player player = Player{ name };
	cout << "Welcome, " << player.getName() << '\n';

	// If the player isn't dead and hasn't won yet, the game continues
	while ( !(player.isDead()) && !(player.hasWon()) )
	{
		Functions::fightMonster( player );
	}

	// At this point, the player is either dead or has won
	if ( player.isDead() )
	{
		cout << "You died at level " << player.getLevel()
				 << " and with " << player.getGold() << " gold.\n"
				 << "Too bad you can't take it with you!\n";
	}
	else if ( player.hasWon() )
	{
		cout <<	"You won the game with " << player.getGold()
				 << " gold!\n";
	}
	return 0;
}
