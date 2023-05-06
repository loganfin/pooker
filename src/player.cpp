#include "player.h"

#include <iostream>
#include <memory>
#include <string>
#include <vector>

Player::Player(std::string n) : name(n) {}

void Player::add_card(std::unique_ptr<Card> card)
{
    hand.push_back(std::move(card));
}

std::vector<Card> Player::show_hand()
{
    std::vector<Card> shown;

    for (auto& i : hand) {
        shown.push_back(Card(i->get_rank(), i->get_suit()));
    }

    return shown;
}

std::vector<std::unique_ptr<Card> >& Player::return_hand()
{
    return hand;
}

std::string Player::get_name()
{
    return name;
}
