#include <iostream>

int main() {

    int firstPlayerTime;
    int secondPlayerTime;
    int thirdPlayerTime;

    std::cin >> firstPlayerTime;
    std::cin >> secondPlayerTime;
    std::cin >> thirdPlayerTime;

    int secondsSum = firstPlayerTime + secondPlayerTime + thirdPlayerTime;
    int minutesOutput = secondsSum / 60;
    int secondsOutput = secondsSum % 60;

    char str[1024];
    sprintf(str, "%d:%02d",minutesOutput, secondsOutput);
    std::cout << str;

    return 0;
}