#include "deck.h"
#include "player.h"

#include <iostream>
#include <string>
#include <vector>

const int hand_size = 2;

int main()
{
    Deck deck;
    std::vector<Player> players;

    players.push_back(Player("Dennis"));
    players.push_back(Player("Marge"));
    players.push_back(Player());

    for (int i = 0; i < hand_size; i++) {
        for (auto& player : players) {
            player.add_card(deck.draw());
        }
    }

    std::cout << "number of cards left in the deck:" << '\n';
    std::cout << deck.cards_left() << '\n';

    for (auto& player : players) {
        std::cout << player.get_name() << "'s hand:" << '\n';
        for (auto& card : player.show_hand()) {
            std::cout << card.get_rank() << " " << card.get_suit() << '\n';
        }

        deck.add_cards(player.return_hand());

        std::cout << "number of cards left in " << player.get_name() << "'s deck:" << '\n';
        std::cout << player.cards_left() << '\n';
    }

    std::cout << "number of cards left in the deck:" << '\n';
    std::cout << deck.cards_left() << '\n';
}
