#include <string>        //For std::string
#include <array>        //For std::array
#include "functions.h" //For getRandomNumber()

#ifndef MONSTER
class Monster : public Creature         //Inherits from Creature
{
public:
  //Enumerate the types of Monsters
  enum Type
	{
		DRAGON,
		ORC,
		SLIME,
    MAX_TYPES
	};

private:
  //This structure is used to create Monster Lookup Table
  struct MonsterData
  {
    std::string_view name{};
  	char symbol{};
  	int  health{ 0 };
  	int  damage{ 0 };
  	int  gold{ 0 };
  };

  //Monster lookup table which we will use for Monster Constructor
  static constexpr std::array<MonsterData, Monster::MAX_TYPES>
    monsterData{ {
      { "dragon", 'D', 20, 4, 100 },
      { "orc", 'o', 4, 2, 25 },
      { "slime", 's', 1, 1, 10 } }
    };

public:
  //Monster constructor takes Monster type
  Monster( Type type ) :
      Creature{ monsterData[type].name.data(),
                monsterData[type].symbol,
                monsterData[type].health,
                monsterData[type].damage,
                monsterData[type].gold }
	{
	}

  //Return a random Monster type
  static Monster getRandomMonster()
  {
       int monster{ Functions::getRandomNumber(0, MAX_TYPES - 1) };
       return Monster{ static_cast<Type>( monster ) };
  }
};
#define MONSTER
#endif
