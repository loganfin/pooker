#pragma once

#include "hand.h"

class Player {
    public:
        Player() = delete;
        Player(std::string n);
        Player(std::string n, uint w);

        void fill_hand(Hand h);
        Hand&& return_hand();
        const Hand& show_hand();
    private:
        Hand hand;
        std::string name;
        uint wallet = 0;
};
