#pragma once

#include "card.h"

#include <memory>
#include <vector>

class Deck {
    public:
        Deck();

        void add_card(std::unique_ptr<Card> card);
        std::unique_ptr<Card> draw();
        bool empty() const;
        void shuffle();
        int size() const;
    private:
        std::vector<std::unique_ptr<Card> > cards;
};
