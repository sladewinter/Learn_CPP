#include <iostream>
#include "functions.h"
 
int main()
{
  Deck deck{};
 
  deck.shuffle();
 
  if (Functions::playBlackjack(deck))
  {
    std::cout << "You win!\n";
  }
  else
  {
    std::cout << "You lose!\n";
  }
 
  return 0;
}