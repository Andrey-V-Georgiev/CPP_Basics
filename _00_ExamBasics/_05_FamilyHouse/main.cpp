#include <iostream>
#include <string>
#include <math.h>

int main() {

    int monthsCount;
    std::cin >> monthsCount;

    double electricityExpenses = 0;
    double waterExpenses = 0;
    double internetExpensees = 0;
    double otherExpenses = 0;

    for (int i = 0; i < monthsCount; ++i) {

        double currentMonthElectricity;
        std::cin >> currentMonthElectricity;

        electricityExpenses += currentMonthElectricity;
        waterExpenses += 20;
        internetExpensees += 15;
        otherExpenses += (currentMonthElectricity + 20 + 15) * 1.2;
    }

    double averageExpenses = (electricityExpenses + waterExpenses + internetExpensees + otherExpenses) / monthsCount;
    printf("Electricity: %.2f lv\n", electricityExpenses);
    printf("Water: %.2f lv\n", waterExpenses);
    printf("Internet: %.2f lv\n", internetExpensees);
    printf("Other: %.2f lv\n", otherExpenses);
    printf("Average: %.2f lv\n", averageExpenses);

    return 0;
}