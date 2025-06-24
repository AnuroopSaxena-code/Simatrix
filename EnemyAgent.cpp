#include "EnemyAgent.h"
#include <iostream>
using namespace std;

EnemyAgent::EnemyAgent(int x, int y, const string& name):Agent(x, y, name) {}

char EnemyAgent::getSymbol() const {
    return 'E';
    // This is the enemy's symbol
}

void EnemyAgent::act() {
    cout << "Enemy " << name << " is plotting evil..." << endl;
}
