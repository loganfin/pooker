#pragma once

#include "card.h"
#include "hand.h"

#include <memory>
#include <vector>

class Deck : public Hand {
    public:
        Deck();

        void shuffle();
};
