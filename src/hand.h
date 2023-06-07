#pragma once

#include "card.h"

#include <iostream>
#include <memory>
#include <vector>

class Hand {
    public:
        auto begin() { return cards.begin(); }
        bool empty() const;
        auto end() { return cards.end(); }
        std::unique_ptr<Card> pop_card();
        std::vector<std::unique_ptr<Card>> pop_hand();
        void push_card(std::unique_ptr<Card> card);
        void push_cards(std::vector<std::unique_ptr<Card>> hand);
        int size() const;
    protected:
        std::vector<std::unique_ptr<Card>> cards;
};
