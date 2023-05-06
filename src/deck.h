#pragma once

#include "card.h"

#include <memory>
#include <vector>

class Deck {
    public:
        Deck();

        void shuffle();
        std::unique_ptr<Card> draw();

    private:
        std::vector<std::unique_ptr<Card> > cards;
};
