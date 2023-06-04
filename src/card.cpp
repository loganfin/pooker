#include "card.h"

#include <iostream>
#include <stdexcept>

/* Rank and Suit enum helper overloads */
Rank& operator++(Rank& rank)
{
    if (rank == Rank::END) {
        throw std::out_of_range("for Rank& operator++(Rank&)");
    }
    rank = static_cast<Rank>(static_cast<std::underlying_type<Rank>::type>(rank) + 1);
    return rank;
}

std::ostream& operator<<(std::ostream& stream, Rank rank)
{

    switch (rank) {
        case Rank::ACE : return stream << "ACE";
        case Rank::TWO : return stream << "TWO";
        case Rank::THREE : return stream << "THREE";
        case Rank::FOUR : return stream << "FOUR";
        case Rank::FIVE : return stream << "FIVE";
        case Rank::SIX : return stream << "SIX";
        case Rank::SEVEN : return stream << "SEVEN";
        case Rank::EIGHT : return stream << "EIGHT";
        case Rank::NINE : return stream << "NINE";
        case Rank::TEN : return stream << "TEN";
        case Rank::JACK : return stream << "JACK";
        case Rank::QUEEN : return stream << "QUEEN";
        case Rank::KING : return stream << "KING";
        default: return stream << "Rank{" << int(rank) << '}';
    }
}

Suit& operator++(Suit& suit)
{
    if (suit == Suit::END) {
        throw std::out_of_range("for Suit& operator++(Suit&)");
    }
    suit = static_cast<Suit>(static_cast<std::underlying_type<Suit>::type>(suit) + 1);
    return suit;
}

std::ostream& operator<<(std::ostream& stream, Suit suit)
{
    switch (suit) {
        case Suit::CLUBS : return stream << "CLUBS";
        case Suit::DIAMONDS : return stream << "DIAMONDS";
        case Suit::HEARTS : return stream << "HEARTS";
        case Suit::SPADES : return stream << "SPADES";
        default: return stream << "Suit{" << int(suit) << '}';
    }
}

Card::Card(Rank r, Suit s) : rank(r), suit(s) {}

Rank Card::get_rank() const
{
    return rank;
}

Suit Card::get_suit() const
{
    return suit;
}
