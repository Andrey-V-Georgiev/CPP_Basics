#include <iostream>

int main() {

    double inputSpeed;
    std::cin >> inputSpeed;

    if (inputSpeed <= 10) {
        std::cout << "slow" << "\n";
    } else if (inputSpeed > 10 && inputSpeed <= 50) {
        std::cout << "average" << "\n";
    } else if (inputSpeed > 50 && inputSpeed <= 150) {
        std::cout << "fast" << "\n";
    } else if (inputSpeed > 150 && inputSpeed <= 1000) {
        std::cout << "ultra fast" << "\n";
    } else {
        std::cout << "extremely fast" << "\n";
    }

    return 0;
}