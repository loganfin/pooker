#include "deck.h"
#include "card.h"

#include <algorithm>
#include <memory>
#include <random>
#include <stdexcept>
#include <vector>

Deck::Deck()
{
    for (Suit suit = Suit::BEGIN; suit < Suit::END; ++suit) {
        for (Rank rank = Rank::BEGIN; rank < Rank::END; ++rank) {
            cards.push_back(std::make_unique<Card>(suit, rank));
        }
    }
}

void Deck::add_card(std::unique_ptr<Card> card)
{
    cards.push_back(std::move(card));
}

std::unique_ptr<Card> Deck::draw()
{
    if (cards.empty()) {
        throw std::out_of_range("for std::unique_ptr<Card> Deck::draw()");
    }

    std::unique_ptr<Card> card = std::move(cards.back());
    cards.pop_back();
    return card;
}

bool Deck::empty() const
{
    return cards.empty();
}

void Deck::shuffle()
{
    auto rd = std::random_device();
    auto rng = std::default_random_engine(rd());
    std::shuffle(std::begin(cards), std::end(cards), rng);
}

int Deck::size() const
{
    return cards.size();
}
