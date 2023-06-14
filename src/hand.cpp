#include "hand.h"

#include <memory>
#include <span>
#include <stdexcept>
#include <vector>

bool Hand::empty() const
{
    return cards.empty();
}

Hand Hand::pop_hand(const int size)
{
    Hand temp;
    const int amount = [size, this]() {
        switch (size) {
            // return the entire hand
            case 0: return this->size();
            // return a subset of the hand
            default: return size;
        }
    }();

    for (auto& card : std::span(begin(), amount)) {
        temp.push_card(pop_card());
    }

    return temp;
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

//std::vector<std::unique_ptr<Card>> Hand::pop_n_cards(const uint n)
//{
//    std::vector<std::unique_ptr<Card>> temp;
//    for (int i = 0; i < n; i++) {
//        temp.push_back(pop_card());
//    }
//    return std::move(temp);
//}
//
//std::vector<std::unique_ptr<Card>> Hand::pop_all_cards()
//{
//    return std::move(cards);
//}

void Hand::push_card(std::unique_ptr<Card> card)
{
    cards.push_back(std::move(card));
}

//void Hand::push_cards(std::vector<std::unique_ptr<Card>> hand)
//{
//    for (auto& card : hand) {
//        push_card(std::move(card));
//    }
//}

void Hand::push_hand(Hand&& hand)
{
    for (auto& card : hand) {
        push_card(hand.pop_card());
    }
}

int Hand::size() const
{
    return cards.size();
}
