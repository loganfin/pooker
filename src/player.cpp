#include "player.h"

#include <iostream>
#include <memory>
#include <vector>

void Player::add_card(std::unique_ptr<Card> card)
{
    hand.push_back(std::move(card));
}

void Player::show_hand()
{
    for (auto& i : hand) {
        std::cout << "suit: " << i->get_suit() << '\n';
        std::cout << "rank: " << i->get_rank() << '\n';
    }
}

std::vector<std::unique_ptr<Card> > Player::return_hand()
{
    std::vector<std::unique_ptr<Card> > shown_hand;
    for (auto& i: hand) {
        shown_hand.push_back(std::move(i));
    }
    return shown_hand;
}
