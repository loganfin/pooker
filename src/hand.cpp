#include "hand.h"

#include <memory>
#include <stdexcept>
#include <vector>

bool Hand::empty() const
{
    return cards.empty();
}

std::unique_ptr<Card> Hand::pop_card()
{
    if (cards.empty()) {
        throw std::out_of_range("for std::unique_ptr<Card> Hand::pop_card()");
    }

    std::unique_ptr<Card> card = std::move(cards.back());
    cards.pop_back();
    return card;
}

std::vector<std::unique_ptr<Card>> Hand::pop_hand()
{
    return std::move(cards);
}

void Hand::push_card(std::unique_ptr<Card> card)
{
    cards.push_back(std::move(card));
}

void Hand::push_cards(std::vector<std::unique_ptr<Card>> hand)
{
    for (auto& card : hand) {
        cards.push_back(std::move(card));
    }
}

int Hand::size() const
{
    return cards.size();
}
