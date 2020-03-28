#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <iostream>
#include "functions.h"
#include "creature.h"
#include "player.h"
#include "monster.h"

using std::cout;
using std::cin;

namespace Functions
{
  //Return a random integer between min and max
  int getRandomNumber(int min, int max)
  {
     // static used so that we only calculate this value once
    static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) };

    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1)
                      * (std::rand() * fraction));
  }

  //handles the fight between the Player and a single Monster
  void fightMonster( Player &player )
  {
    // First randomly generate a monster
    Monster monster{ Monster::getRandomMonster() };
    cout << "You have encountered a " << monster.getName()
         << " (" << monster.getSymbol() << ").\n";

    // While the monster isn't dead and the player isn't dead
    while ( !(player.isDead()) && !(monster.isDead()))
    {
      cout << "(R)un or (F)ight: ";
      char choice{};
      cin >> choice;

      if (choice == 'f' || choice == 'F')   //Player chose to fight
      {
        attackMonster(player, monster);    //Player attacks Monster
        attackPlayer (player, monster);   //Monster attacks Player
      }

      // 50% chance of fleeing successfully
      else if (choice == 'r' || choice == 'R')
      {
        if( Functions::getRandomNumber(0, 1) )
        {
          cout << "You successfully fled.\n";

          return;                     // success ends the encounter
        }
        else
        {
          // Failure to flee gives the monster a free attack
          cout << "You failed to flee.\n";
          attackPlayer (player, monster);   //Monster attacks Player
        }
      }
    }
  }

  //handles the player attacking the monster and leveling up
  void attackMonster( Player &player, Monster &monster )
  {
    // If the player is dead, we can't attack the monster
    if (player.isDead())
      return;

    // Reduce the monster's health by the player's damage
    monster.reduceHealth( player.getDamage() );
    cout << "You hit the " << monster.getName() << " for "
         << player.getDamage() << " damage.\n";

    // If the monster is now dead, level the player up
    if( monster.isDead() )
    {
      player.addGold( monster.getGold() );
      player.levelUp();
      cout << "You killed the " << monster.getName() << ".\n"
           << "You are now level " << player.getLevel() << ".\n"
           << "You found " << player.getGold() << " gold.\n";
    }
  }

  //handles the monster attacking the player
  void attackPlayer( Player &player, Monster &monster )
  {
    // If the monster is dead, it can't attack the player
    if (monster.isDead())
      return;

    // Reduce the player's health by the monster's damage
    player.reduceHealth( monster.getDamage() );
    cout << "The " << monster.getName() << " hit you for "
         << monster.getDamage() << " damage.\n";
  }
}
