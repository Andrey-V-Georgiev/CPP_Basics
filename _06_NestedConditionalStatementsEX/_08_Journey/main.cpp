#include <iostream>

int main() {

    double budget;
    std::cin >> budget;

    std::string season;
    std::cin >> season;

    std::string destination;
    std::string typeVacation;
    double spendedMoney = 0;

    if (budget <= 100) {
        destination = "Bulgaria";
        if (season == "summer") {
            typeVacation = "Camp";
            spendedMoney = budget * 0.3;
        } else if (season == "winter") {
            typeVacation = "Hotel";
            spendedMoney =  budget * 0.7;
        }
    } else if (budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            typeVacation = "Camp";
            spendedMoney = budget * 0.4;
        } else if (season == "winter") {
            typeVacation = "Hotel";
            spendedMoney = budget * 0.8;
        }
    } else {
        destination = "Europe";
        typeVacation = "Hotel";
        spendedMoney = budget * 0.9;
    }

    printf("Somewhere in %s\n", destination.c_str());
    printf("%s - %.2f", typeVacation.c_str(), spendedMoney);

    return 0;
}