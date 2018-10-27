#include <iostream>

int main() {

    int inputHours;
    std::cin >> inputHours;
    int inputMinutes;
    std::cin >> inputMinutes;

    int bothInMinutesPlus15 = inputHours * 60 + inputMinutes + 15;

    int hours = bothInMinutesPlus15 / 60;
    int minutes = bothInMinutesPlus15 % 60;

    if (minutes > 59) {
        hours += 1;
        minutes -= 59;
    }

    if (hours > 23) {
        hours -= 24;
    }

    printf("%d:%02d", hours, minutes);

    return 0;
}