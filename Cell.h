#pragma once
#include "CellType.h"

class Cell{
    CellType type;
    public:
    Cell() : type(CellType::Empty) {}
    // Default cell type is empty

    CellType getType() const{
        return type;
    }

    void setType(CellType newType){
        type = newType;
    }

    char display() const{
        switch(type){
            case CellType::Empty: return '.';
            case CellType::Wall: return '#';
            case CellType::Agent: return 'A';
            default: return '?';
        }
    }
};