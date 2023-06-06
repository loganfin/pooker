#include "deck.h"
#include "card.h"
#include "hand.h"

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

void Deck::shuffle()
{
    auto rd = std::random_device();
    auto rng = std::default_random_engine(rd());
    std::shuffle(std::begin(cards), std::end(cards), rng);
}
