#pragma once

#include "card.h"
#include "deck.h"
#include "player.h"

#include <memory>
#include <string>
#include <vector>

enum Hand {
    HIGH = 1, PAIR, TWO_PAIR, THREE_OF_A_KIND, STRAIGHT, FLUSH, FULL_HOUSE, FOUR_OF_A_KIND, STRAIGHT_FLUSH, ROYAL_FLUSH
};

enum Turn {
    FLOP = 1, TURN, RIVER
};

class Game {
    public:
        Game();
        Game(std::vector<std::string> names);

        void add_player(std::string name);
        void advance_turn();
        Turn get_turn();
        void deal(int num_cards = 2);
        Hand get_hand(std::vector<Card> cards);

    private:
        Deck deck;
        std::vector<Player> players;
        std::vector<std::unique_ptr<Card> > table;
};
