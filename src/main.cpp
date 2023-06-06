#include "card.h"
#include "deck.h"
#include "hand.h"

#include <iostream>
#include <memory>

int main()
{
    Deck deck;
    Hand hand;

    deck.shuffle();
    while (!deck.empty()) {
        hand.push_card(deck.pop_card());
    }

    for (auto& card : hand) {
        std::cout << *card << '\n';
    }

}

