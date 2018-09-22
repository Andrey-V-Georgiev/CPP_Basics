#include <iostream>

int main() {

    double b1, b2, h;
    std::cin >> b1 >> b2 >> h;
    double tArea = (b1 + b2) * h / 2;
    std::cout << tArea << std::endl;

    return 0;
}