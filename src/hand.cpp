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

void Hand::push_card(std::unique_ptr<Card> card)
{
    cards.push_back(std::move(card));
}

/*
void Hand::push_cards(Hand hand)
{
}
*/

int Hand::size() const
{
    return cards.size();
}
