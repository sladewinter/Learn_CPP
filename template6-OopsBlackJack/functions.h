#include "classes.h"

#ifndef FUNCTIONS
namespace Functions
{
    bool playerWantsHit();
    bool playerTurn(Deck& deck, Player& player);
    bool dealerTurn(Deck& deck, Player& dealer);
    bool playBlackjack(Deck& deck);
}
#define FUNCTIONS
#endif