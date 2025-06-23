#include "World.h"

int main() {
    World world(10, 5);

    // Examples for now
    world.setCellType(2, 1, CellType::Wall);
    world.setCellType(2, 2, CellType::Wall);
    world.setCellType(4, 1, CellType::Agent);

    world.display();
    return 0;
}
