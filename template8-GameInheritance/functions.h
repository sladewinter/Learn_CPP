//Forward declarations of functions defined in functions.cpp

//Forward declaring the classes
class Player;
class Monster;

#ifndef FUNCTIONS
namespace Functions
{
  //Return a random integer between min and max
  int getRandomNumber(int min, int max);

  //handles the fight between the Player and a single Monster
  void fightMonster( Player &player );

  //handles the player attacking the monster and leveling up
  void attackMonster( Player &player, Monster &monster );

  //handles the monster attacking the player
  void attackPlayer( Player &player, Monster &monster );

}
#define FUNCTIONS
#endif
