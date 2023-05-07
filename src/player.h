#pragma once

#include "card.h"

#include <memory>
#include <string>
#include <vector>

class Player {
    public:
        Player(std::string n = "null");

        void add_card(std::unique_ptr<Card> card);
        std::vector<Card> show_hand();
        std::vector<std::unique_ptr<Card> > return_hand();
        std::string get_name();
        int hand_size();

    private:
        std::vector<std::unique_ptr<Card> > hand;
        std::string name;
};
