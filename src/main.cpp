#include "deck.h"
#include "player.h"

#include <iostream>
#include <string>
#include <vector>

const int hand_size = 2;
const int num_games = 26;

int main()
{
    Deck deck;
    std::vector<Player> players;

    players.push_back(Player("Dennis"));

    for (int i = 0; i < num_games; i++) {
        deck.shuffle();
        for (int j = 0; j < hand_size; j++) {
            for (auto& player : players) {
                player.add_card(deck.draw());
            }
        }

        for (auto& player : players) {
            std::cout << player.get_name() << "'s hand:" << '\n';
            for (auto& card : player.show_hand()) {
                std::cout << card.get_rank() << " " << card.get_suit() << '\n';
            }

            deck.add_cards(player.return_hand());

        }

        std::cout << '\n';
    }
}
