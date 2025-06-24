#pragma once
#include "Agent.h"
using namespace std;

class PlayerAgent : public Agent {
public:
    PlayerAgent(int x, int y, const string& name);
    char getSymbol() const override;
    void act() override;
};
