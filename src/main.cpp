#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"

#include <iostream>
#include <memory>

int main()
{
    Deck deck;
    deck.shuffle();
    std::vector<Hand> hands{2};

    std::vector<Player> players;
    players.push_back(Player("Bob"));
    players.push_back(Player("jeff"));

    for (int i{}; i < 5; i++) {
        std::cout << "hand: " << i << '\n';
        deck.shuffle();
        for (auto& player : players) {
            std::cout << player.get_name() << '\n';
            player.fill_hand(deck.make_hand(2));
            for (const auto& card : player.show_hand()) {
                std::cout << *card << '\n';
            }
        }

        for (auto& player : players) {
            deck.push_hand(player.return_hand());
        }
    }
}
