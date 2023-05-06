#pragma once

enum Rank {
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING
};

enum Suit {
    CLUBS = 0, DIAMONDS, HEARTS, SPADES
};

class Card {
    public:
        Card(Rank r, Suit s);

        Rank get_rank() const;
        Suit get_suit() const;
    private:
        Rank rank;
        Suit suit;
};
