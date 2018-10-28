#include <iostream>
#include <math.h>

int main() {

    double stepsCount;
    std::cin >> stepsCount;

    double dancersCount;
    std::cin >> dancersCount;

    double days;
    std::cin >> days;

    double percentStepsPerDay = ceil((stepsCount / days) / stepsCount * 100);
    double percentStepsPerDancer = percentStepsPerDay / dancersCount;


    if (percentStepsPerDay < 13) {
        printf("Yes, they will succeed in that goal! %.2f%%.", percentStepsPerDancer);
    } else {
        printf("No, They will not succeed in that goal! Required %.2f%% steps to be learned per day.", percentStepsPerDancer);
    }


    return 0;
}