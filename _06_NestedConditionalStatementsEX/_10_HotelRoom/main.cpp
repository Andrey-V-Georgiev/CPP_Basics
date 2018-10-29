#include <iostream>

int main() {

    std::string month;
    std::cin >> month;

    int nightsCount;
    std::cin >> nightsCount;

    double apartmentExpenses = 0;
    double studioExpenses = 0;

    if (month == "May" || month == "October") {

        studioExpenses = 50 * nightsCount;
        apartmentExpenses = 65 * nightsCount;

        if (nightsCount > 7) {
            if (nightsCount > 14) {
                apartmentExpenses *= 0.9;
                studioExpenses *= 0.7;
            } else {
                studioExpenses *= 0.95;
            }
        }

    } else if (month == "June" || month == "September") {

        studioExpenses = 75.20 * nightsCount;
        apartmentExpenses = 68.70 * nightsCount;

        if (nightsCount > 14) {
            apartmentExpenses *= 0.9;
            studioExpenses *= 0.8;
        }

    } else if (month == "July" || month == "August") {

        studioExpenses = 76 * nightsCount;
        apartmentExpenses = 77 * nightsCount;

        if (nightsCount > 14) {
            apartmentExpenses *= 0.9;
        }

    }

    printf("Apartment: %.2f lv.\n", apartmentExpenses);
    printf("Studio: %.2f lv.", studioExpenses);

    return 0;
}