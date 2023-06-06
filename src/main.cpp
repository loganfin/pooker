#include "card.h"
#include "deck.h"

#include <iostream>
#include <memory>

int main()
{
    Deck deck;
    std::unique_ptr<Card> temp;

    for (int i = 0; i < 104; i++) {
        deck.shuffle();
        temp = deck.draw();
        std::cout << temp->get_rank() << " of " << temp->get_suit() << '\n';
        deck.add_card(std::move(temp));
    }
}

