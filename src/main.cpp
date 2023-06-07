#include "card.h"
#include "deck.h"
#include "hand.h"

#include <iostream>
#include <memory>

int main()
{
    Deck deck;
    std::vector<Hand> hands{2};

    // simple game loop
    for (int i = 0; i < 10; i++) {
        deck.shuffle();
        // deal two cards to each hand
        for (int j = 0; j < 2; j++) {
            for (auto& hand : hands) {
                hand.push_card(deck.pop_card());
            }
        }

        // print each card in each hand
        for (auto& hand : hands) {
            std::cout << "Next hand: " << '\n';
            for (const auto& card : hand) {
                std::cout << *card << '\n';
            }
        }

        // return all cards back to the deck
        for (auto& hand : hands) {
            deck.push_cards(hand.pop_hand());
        }

        std::cout << "deck.size(): " << deck.size() << '\n';
    }
}

