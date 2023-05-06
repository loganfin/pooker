#include "card.h"

Card::Card(Rank r, Suit s) : rank(r), suit(s) {}

Rank Card::get_rank()
{
    return rank;
}

Suit Card::get_suit()
{
    return suit;
}
