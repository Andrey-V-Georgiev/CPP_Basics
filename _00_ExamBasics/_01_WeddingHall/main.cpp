#include <iostream>
#include <math.h>

int main() {

    double roomSideA;
    std::cin >> roomSideA;

    double roomSideB;
    std::cin >> roomSideB;

    double barSide;
    std::cin >> barSide;

    double roomArea = roomSideA * roomSideB;
    double barArea = barSide * barSide;
    double dancingArea = roomArea * 0.19;
    double freeSpace = roomArea - barArea - dancingArea;
    double guestsCapacity = freeSpace / 3.2;
    double guestsCapacityRounded = ceil(guestsCapacity);

    std::cout << guestsCapacityRounded << std::endl;

    return 0;
}
