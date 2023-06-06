#pragma once

#include <iostream>

enum class Rank {
    BEGIN = 1,
    ACE = BEGIN, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING,
    END
};

Rank& operator++(Rank& rank);
std::ostream& operator<<(std::ostream& stream, Rank rank);

enum class Suit {
    BEGIN = 0,
    CLUBS = BEGIN, DIAMONDS, HEARTS, SPADES,
    END
};

Suit& operator++(Suit& suit);
std::ostream& operator<<(std::ostream& stream, Suit suit);

class Card {
    public:
        Card() = delete;
        Card(Suit s, Rank r);

        Suit get_suit() const;
        Rank get_rank() const;
    private:
        const Suit suit;
        const Rank rank;
};
