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

    for (auto& player : players) {
        std::cout << player.get_name() << "'s hand: " << '\n';
        for (auto& i : player.show_hand()) {
            std::cout << i.get_rank() << " " << i.get_suit() << '\n';
        }
    }
}
