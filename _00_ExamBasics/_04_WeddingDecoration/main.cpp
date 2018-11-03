#include <iostream>
#include <string>
#include <math.h>

int main() {

    double budget;
    std::cin >> budget;

    int balloonsCount = 0;
    int flowersCount = 0;
    int candlesCount = 0;
    int ribbonCount = 0;
    double spendMoney = 0;

    while (true) {

        std::string typeOfGood;
        std::cin.ignore();
        std::getline(std::cin, typeOfGood);
        double currentPrice = 0.0;

        if (typeOfGood == "stop") {
            printf("Spend money: %.2f\n", spendMoney);
            printf("Money left: %.2f\n", budget - spendMoney);
            break;
        }

        if (spendMoney >= budget) {
            std::cout << "All money is spent!" << std::endl;
            break;
        }

        int goodCount;
        std::cin >> goodCount;

        if (typeOfGood == "balloons") {
            balloonsCount += goodCount;
            currentPrice = goodCount * 0.1;
        } else if (typeOfGood == "flowers") {
            flowersCount += goodCount;
            currentPrice = goodCount * 1.5;
        } else if (typeOfGood == "candles") {
            candlesCount += goodCount;
            currentPrice = goodCount * 0.5;
        } else if (typeOfGood == "ribbon") {
            ribbonCount += goodCount;
            currentPrice = goodCount * 2;
        }

        spendMoney += currentPrice;
    }

    printf("Purchased decoration is %d balloons, %d m ribbon, %d flowers and %d candles.",
           balloonsCount, ribbonCount, flowersCount, candlesCount);

    return 0;
}