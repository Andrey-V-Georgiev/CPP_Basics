#include <iostream>
#include <string>
#include <limits>

using namespace std;
int main() {

    double tripPrice;
    cin >> tripPrice;
    double availableMoney;
    cin >> availableMoney;

    int daysInSpend = 0;
    int daysCount = 0;

    std::string action;
    double moneyOperation;

    while (true) {
        daysCount++;

        std::cin >> action;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> moneyOperation;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (action == "save") {
            daysInSpend = 0;
            availableMoney += moneyOperation;

            if (availableMoney >= tripPrice) {
                printf("You saved the money for %d days.", daysCount);
            }

        } else if (action == "spend") {
            daysInSpend++;

            if (daysInSpend == 5) {
                cout << "You can't save the money." << endl;
                cout << daysCount << endl;
                break;
            }

            availableMoney =  availableMoney - moneyOperation > 0 ? availableMoney - moneyOperation : 0;
        }
    }

    return 0;
}