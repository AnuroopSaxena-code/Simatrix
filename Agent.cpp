#include "Agent.h"
using namespace std;

Agent::Agent(int startX,int startY, const string& name) : x(startX),y(startY),name(name) {}

int Agent::getX() const {
    return x;
}

int Agent::getY() const {
    return y;
}

string Agent::getName() const {
    return name;
}

void Agent::setPosition(int newX, int newY) {
    x = newX;
    y = newY;
}