#include "deck.h"
#include "card.h"

#include <algorithm>
#include <memory>
#include <random>
#include <vector>

Deck::Deck()
{
    for (int suit = CLUBS; suit <= SPADES; suit++) {
        for (int rank = ACE; rank <= KING; rank++) {
            cards.push_back(std::make_unique<Card>(static_cast<Rank>(rank), static_cast<Suit>(suit)));
        }
    }
}

void Deck::shuffle()
{
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(cards), std::end(cards), rng);
}

std::unique_ptr<Card> Deck::draw()
{
    if (cards.empty()) {
        return nullptr;
    }

    std::unique_ptr<Card> card = std::move(cards.back());
    cards.pop_back();
    return card;
}

void Deck::add_card(std::unique_ptr<Card>& card)
{
    cards.push_back(std::move(card));
}

void Deck::add_cards(std::vector<std::unique_ptr<Card> > cards)
{
    for (auto& card : cards) {
        this->cards.push_back(std::move(card));
    }
}

int Deck::size()
{
    return cards.size();
}
