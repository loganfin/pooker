#include "game.h"

#include <memory>
#include <string>
#include <vector>

Game::Game() {}

Game::Game(std::vector<std::string> names)
{
    for (std::string name : names) {
        players.push_back(Player(name));
    }
}
