#pragma once

#include "card.h"

#include <iostream>
#include <memory>
#include <vector>

class Hand {
    public:
        auto begin() { return cards.begin(); }
        auto begin() const { return cards.begin(); }
        bool empty() const;
        auto end() { return cards.end(); }
        auto end() const { return cards.end(); }
        Hand pop_hand(const int size = 0);
        std::unique_ptr<Card> pop_card();
        std::vector<std::unique_ptr<Card>> pop_n_cards(const uint n);
        std::vector<std::unique_ptr<Card>> pop_all_cards();
        void push_card(std::unique_ptr<Card> card);
        void push_cards(std::vector<std::unique_ptr<Card>> hand);
        void push_hand(Hand&& hand);
        int size() const;
    protected:
        std::vector<std::unique_ptr<Card>> cards;
};
