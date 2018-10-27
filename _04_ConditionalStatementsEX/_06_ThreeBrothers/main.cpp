#include <iostream>
#include <math.h>

int main() {

    double firstBrotherHours;
    std::cin >> firstBrotherHours;
    double secondBrotherHours;
    std::cin >> secondBrotherHours;
    double thirdBrotherHours;
    std::cin >> thirdBrotherHours;
    double fatherHours;
    std::cin >> fatherHours;

    double cleaningTime = 1 / ((1/firstBrotherHours) + (1/secondBrotherHours) + (1/thirdBrotherHours));
    double cleaningTimePlusRest = cleaningTime * 1.15;
    printf("Cleaning time: %.2f\n", cleaningTimePlusRest);

    double timeLeft = fatherHours - cleaningTimePlusRest;
    double timeLeftAbs = abs(timeLeft);

    if (timeLeft > 0) {
        int timeLeftFloor = (int)floor(timeLeftAbs);
        printf("Yes, there is a surprise - time left -> %d hours.", timeLeftFloor);
    } else {
        int timeLeftCeil = (int)ceil(timeLeftAbs);
        printf("No, there isn't a surprise - shortage of time -> %d hours.", timeLeftCeil);
    }

    return 0;
}