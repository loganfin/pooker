#pragma once

#include "card.h"

#include <memory>
#include <vector>

class Player {
    public:
        void add_card(std::unique_ptr<Card> card);
        void show_hand();
        std::vector<std::unique_ptr<Card> > return_hand();

    private:
        std::vector<std::unique_ptr<Card> > hand;
};
