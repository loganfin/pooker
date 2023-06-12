#include "player.h"

#include <string>

Player::Player(std::string n) : name (n) {}

Player::Player(std::string n, uint w) : name(n), wallet(w) {}

void Player::fill_hand(Hand h)
{
    if (hand.size()) {
        for (const auto& card : h) {
            hand.push_card(h.pop_card());
        }
    } else {
        hand = std::move(h);
    }
}

Hand&& Player::return_hand()
{
    return std::move(hand);
}

const Hand& Player::show_hand()
{
    return hand;
}

std::string Player::get_name() const
{
    return name;
}
