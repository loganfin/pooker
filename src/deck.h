#pragma once

#include "card.h"

#include <memory>
#include <vector>

class Deck {
    public:
        Deck();

        void shuffle();
        std::unique_ptr<Card> draw();
        void add_card(std::unique_ptr<Card>& card);
        void add_cards(std::vector<std::unique_ptr<Card> > card);
        int size();

    private:
        std::vector<std::unique_ptr<Card> > cards;
};
