#include "game.h"

#include <memory>
#include <string>
#include <vector>

Game::Game() {}

Game::Game(std::vector<std::string> names)
{
    for (std::string name : names) {
        players.emplace(name);
    }
}

void Game::add_player(std::string name)
{
    players.emplace(name);
}
