// Maximum score before losing.
#ifndef MAXIMUMSCORE
constexpr int maximumScore{ 21 };
#define MAXIMUMSCORE
#endif
 
// Minimum score that the dealer has to have.
#ifndef MINIMUMDEALERSCORE
constexpr int minimumDealerScore{ 17 };
#define MINIMUMDEALERSCORE
#endif
 
#ifndef CARDSUIT
enum class CardSuit
{
  SUIT_CLUB,
  SUIT_DIAMOND,
  SUIT_HEART,
  SUIT_SPADE,
 
  MAX_SUITS
};
#define CARDSUIT
#endif
 
#ifndef CARDRANK
enum class CardRank
{
  RANK_2,
  RANK_3,
  RANK_4,
  RANK_5,
  RANK_6,
  RANK_7,
  RANK_8,
  RANK_9,
  RANK_10,
  RANK_JACK,
  RANK_QUEEN,
  RANK_KING,
  RANK_ACE,
 
  MAX_RANKS
};
#define CARDRANK
#endif
 