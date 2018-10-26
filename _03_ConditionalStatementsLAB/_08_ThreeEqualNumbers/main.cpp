#include <iostream>

int main() {

    double a;
    double b;
    double c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    if (a == b && b == c) {
        std::cout << "yes";
    } else {
        std::cout << "no";
    }

    return 0;
}