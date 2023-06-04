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
        Card(Rank r, Suit s);

        Rank get_rank() const;
        Suit get_suit() const;
    private:
        const Rank rank;
        const Suit suit;
};
