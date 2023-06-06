#include "card.h"
#include "deck.h"
#include "hand.h"

#include <iostream>
#include <memory>

int main()
{
    Deck deck;
    Hand hand;

    for (int i = 0; i < 52; i++) {
        hand.push_card(deck.draw());
    }

    for (auto& card : hand) {
        std::cout << *card << '\n';
    }

}

