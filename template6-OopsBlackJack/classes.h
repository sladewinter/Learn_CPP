#include <array>
#include "constants.h"

#ifndef CARD
class Card
{
    
private:
  CardRank m_rank{};
  CardSuit m_suit{};
 
public:
  void print() const;
  
  int value() const;
 
  Card() = default;
 
  Card(CardRank rank, CardSuit suit)
      : m_rank{ rank }, m_suit{ suit }
  {
  }
};
#define CARD
#endif
 
#ifndef DECK
class Deck
{
public:
  using array_type = std::array<Card, 52>;
  using index_type = array_type::size_type;
 
private:
  array_type m_deck{};
  index_type m_cardIndex{ 0 };
 
public:
  void print() const;
 
  void shuffle();
 
  const Card& dealCard(void);
 
  Deck()
  {
    index_type card{ 0 };
 
    auto suits{ static_cast<index_type>(CardSuit::MAX_SUITS) };
    auto ranks{ static_cast<index_type>(CardRank::MAX_RANKS) };
 
    for (index_type suit{ 0 }; suit < suits; ++suit)
    {
      for (index_type rank{ 0 }; rank < ranks; ++rank)
      {
        m_deck[card] = { static_cast<CardRank>(rank), static_cast<CardSuit>(suit) };
        ++card;
      }
    }
  }
};
#define DECK
#endif

#ifndef PLAYER 
class Player
{
private:
  int m_score{};
 
public:
  void drawCard(Deck& deck);
 
  int score() const;
 
  bool isBust() const;
};
#define PLAYER
#endif