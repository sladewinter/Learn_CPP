#ifndef PLAYER
class Player : public Creature         //Inherits from Creature
{
private:
  int m_level{ 1 };                //Player's level starts at 1

public:

  //Player constructor takes only name
  Player( const std::string &name = " " ) :
      Creature{ name, '@', 10, 1, 0 }
	{
	}

  //increases the player's level and damage by 1
	void levelUp()
  {
    ++m_level;
    ++m_damage;
  }

  //Get methods to access members
	int getLevel() { return m_level; }

  //returns true if the player has reached level 20.
  bool hasWon() { return ( m_level >= 20 ); }

};
#define PLAYER
#endif
