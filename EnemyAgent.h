#pragma once
#include "Agent.h"
using namespace std;

class EnemyAgent : public Agent {
public:
    EnemyAgent(int x, int y, const string& name);

    char getSymbol() const override;
    void act() override;
};
