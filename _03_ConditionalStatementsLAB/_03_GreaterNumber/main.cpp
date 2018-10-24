#include <iostream>

int main() {

    int firstNum;
    std::cin >> firstNum;
    int secondNum;
    std::cin >> secondNum;

    if (firstNum <= secondNum) {
        std::cout << secondNum << "\n";
    } else {
        std::cout << firstNum << "\n";
    }

    return 0;
}