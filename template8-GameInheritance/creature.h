#include <string>                         //for std::string
#ifndef CREATURE
class Creature
{
protected:
	std::string m_name{};
	char m_symbol{};
	int  m_health{ 0 };            //amount of health
	int  m_damage{ 0 };          //amount of damage it does per attack
	int  m_gold{ 0 };          //amount of gold it is carrying

public:

	//Creature constructor
	Creature( const std::string &name = " ", const char symbol = ' ',
		const int health = 0, const int damage = 0, const int gold = 0) :
			m_name{ name }, m_symbol{ symbol }, m_health{ health },
													m_damage{ damage }, m_gold{ gold }
	{
	}

	//Get methods to access members
	std::string getName() { return m_name;   }
	char getSymbol()      { return m_symbol; }
	int getHealth ()      { return m_health; }
	int getDamage ()      { return m_damage; }
	int getGold   ()      { return m_gold ;  }

  //reduces the Creature's health by an integer amount.
	void reduceHealth(int amount) { m_health -= amount; }

  //returns true when the Creature's health is 0 or less
	bool isDead() { return ( m_health <= 0 ); }

	// adds gold to the Creature.
	void addGold(int gold) { m_gold += gold; }

};
#define CREATURE
#endif
