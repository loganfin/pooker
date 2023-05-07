#include "game.h"

#include <memory>
#include <string>
#include <vector>

Game::Game() {}

Game::Game(std::vector<std::string> names)
{
    for (std::string name : names) {
        players.emplace(name, name);
    }
}

void Game::add_player(std::string name)
{
    players.emplace(name, name);
}

bool Game::remove_player(std::string name)
{
    if (players.erase(name)) {
        return true;
    }
    return false;
}
