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

    for (std::unique_ptr<Card>& card : hand) {
        shown.push_back(Card(card->get_rank(), card->get_suit()));
    }

    return shown;
}

std::vector<std::unique_ptr<Card> > Player::return_hand()
{
    std::vector<std::unique_ptr<Card> > temp;

    for (auto& card : hand) {
        temp.push_back(std::move(card));
    }
    hand.clear();
    return temp;
}

std::string Player::get_name()
{
    return name;
}

int Player::cards_left()
{
    return hand.size();
}
