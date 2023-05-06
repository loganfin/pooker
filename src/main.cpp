#include "deck.h"
#include "player.h"

#include <iostream>

int main()
{
    Deck deck;

    Player p1;
    Player p2;

    p1.add_card(deck.draw());
    p2.add_card(deck.draw());
    p1.add_card(deck.draw());
    p2.add_card(deck.draw());

    std::cout << "player 1 hand:\n";
    p1.show_hand();

    std::cout << '\n';

    std::cout << "player 2 hand:\n";
    p2.show_hand();
}
