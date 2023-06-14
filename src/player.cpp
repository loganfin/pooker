#include "player.h"

#include <string>

Player::Player(std::string n) : name (n) {}

Player::Player(std::string n, uint w) : name(n), wallet(w) {}

void Player::fill_hand(Hand h)
{
    if (hand.empty()) {
        hand = std::move(h);
    } else {
        hand.push_hand(std::move(h));
    }
}

Hand Player::return_hand()
{
    return hand.pop_hand();
}

const Hand& Player::show_hand()
{
    return hand;
}

std::string Player::get_name() const
{
    return name;
}
