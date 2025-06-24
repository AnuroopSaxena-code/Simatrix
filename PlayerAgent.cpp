#include "PlayerAgent.h"
#include <iostream>
using namespace std;

PlayerAgent::PlayerAgent(int x, int y, const std::string& name):Agent(x, y, name) {}

char PlayerAgent::getSymbol() const {
    return '@'; // Player symbol
}

void PlayerAgent::act() {
    std::cout << "Player " << name << " is thinking..." << std::endl;
}
