#include <iostream>
#include <string>
#include <cmath>

int main() {

    double puzzlePrice = 2.60;
    double barbiePrice = 3;
    double bearPrice = 4.10;
    double minionPrice = 8.20;
    double truckPrice = 2;

    double vacationPrice;
    std::cin >> vacationPrice;
    int puzzlesCount;
    std::cin >> puzzlesCount;
    int barbiesCount;
    std::cin >> barbiesCount;
    int bearsCount;
    std::cin >> bearsCount;
    int minionsCount;
    std::cin >> minionsCount;
    int trucksCount;
    std::cin >> trucksCount;

    int totalToysCount = puzzlesCount + barbiesCount + bearsCount + minionsCount + trucksCount;

    double puzzlesIncomes = puzzlePrice * puzzlesCount;
    double barbiesIncoms = barbiePrice * barbiesCount;
    double bearsIncoms = bearPrice * bearsCount;
    double minionsIncomes = minionPrice * minionsCount;
    double trucksIncomes = truckPrice * trucksCount;
    double totalIncomes = puzzlesIncomes + barbiesIncoms + bearsIncoms + minionsIncomes + trucksIncomes;
    double incomesAfterTaxex;

    if (totalToysCount >= 50) {
        incomesAfterTaxex = (totalIncomes * 0.75) * 0.9;
    } else {
        incomesAfterTaxex = totalIncomes * 0.9;
    }

    double moneyLeft;
    moneyLeft = incomesAfterTaxex - vacationPrice;

    if (moneyLeft >= 0) {
        printf("Yes! %.2f lv left.", moneyLeft);
    } else {
        printf("Not enough money! %.2f lv needed.", std::abs(moneyLeft));
    }

    return 0;
}