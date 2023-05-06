#include "card.h"

Card::Card(Rank r, Suit s) : rank(r), suit(s) {}

Rank Card::get_rank() const
{
    return rank;
}

Suit Card::get_suit() const
{
    return suit;
}
