#include <iostream>
#include <math.h>

int main() {

    double worldRecordInSeconds;
    std::cin >> worldRecordInSeconds;

    double distanceInMeters;
    std::cin >> distanceInMeters;

    double secondsPerMeter;
    std::cin >> secondsPerMeter;

    double ivanchoTime = distanceInMeters * secondsPerMeter;
    double delay = floor(distanceInMeters / 15) * 12.5;
    double ivanchoTotalTime = ivanchoTime + delay;

    if (worldRecordInSeconds > ivanchoTotalTime) {
        printf("Yes, he succeeded! The new world record is %.2f seconds.", ivanchoTotalTime);
    } else {
        printf("No, he failed! He was %.2f seconds slower.", ivanchoTotalTime - worldRecordInSeconds);
    }

    return 0;
}