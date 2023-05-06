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

        Rank get_rank();
        Suit get_suit();
    private:
        Rank rank;
        Suit suit;
};
