#pragma once
#include <string>
using namespace std;

class Agent{
    protected:
        int x,y;
        string name;
    public:
        Agent(int startX, int startY, const string& name);
        
        int getX() const;
        int getY() const;
        string getName() const;

        void setPosition(int newX, int newY);

        virtual char getSymbol() const = 0;
        virtual void act() = 0;

        virtual ~Agent() = default;
};