#include <iostream>

int main() {

    int inputNumber;
    std::cin >> inputNumber;
    double bonusPoints;
    double additionalBonusPoints;

    if (inputNumber % 2 == 0) {
        additionalBonusPoints += 1;
    } else if (inputNumber % 5 == 0) {
        additionalBonusPoints += 2;
    }

    if (inputNumber <= 100) {
        bonusPoints += 5;
    } else if (inputNumber > 100 && inputNumber <= 1000) {
        bonusPoints += inputNumber * 0.2;
    } else if (inputNumber > 1000) {
        bonusPoints += inputNumber * 0.1;
    }

    std::cout << bonusPoints + additionalBonusPoints << "\n";
    std::cout << inputNumber + bonusPoints + additionalBonusPoints << "\n";

    return 0;
}