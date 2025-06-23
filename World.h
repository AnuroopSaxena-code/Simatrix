#pragma once
#include <iostream>
#include <vector>
#include "Cell.h"
using namespace std;

class World{
    int width, height;
    vector<vector<Cell>> grid;
    public:
    World(int w, int h) : width(w), height(h), grid(h, vector<Cell>(w)) {}

    // to display world:
    void display() const{
        for(int i=0;i<height;i++){
            for(int j=0;j<width;j++){
                cout<<grid[i][j].display();
            }
            cout<<"\n";
        }
    }
    void setCellType(int x, int y, CellType type){
        if(x>= 0 && x<width && y>=0 && y<height){
            grid[y][x].setType(type);
        }
    }
};