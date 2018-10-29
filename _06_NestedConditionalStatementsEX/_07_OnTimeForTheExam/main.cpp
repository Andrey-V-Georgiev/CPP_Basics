#include <iostream>

int main() {

    int examHour;
    std::cin >> examHour;

    int examMinutes;
    std::cin >> examMinutes;

    int arrivalHour;
    std::cin >> arrivalHour;

    int arrivalMinutes;
    std::cin >> arrivalMinutes;

    int examMinutesRepresentation = examHour * 60 + examMinutes;
    int arrivalMinutesRepresentation = arrivalHour * 60 + arrivalMinutes;
    int totalMinutesDiff = examMinutesRepresentation - arrivalMinutesRepresentation;

    int hoursDiff = totalMinutesDiff / 60 <= 23 ? totalMinutesDiff / 60 : totalMinutesDiff / 60 - 24;
    int minutesDiff;
    if (totalMinutesDiff % 60 <= 59) {
        minutesDiff = totalMinutesDiff % 60;
    } else {
        minutesDiff = totalMinutesDiff % 60 - 60;
        hoursDiff += 1;
    }

    if (totalMinutesDiff >= 0 && totalMinutesDiff <= 30) {
        std::cout << "On time" << "\n";
        printf("%d minutes before the start", totalMinutesDiff);

    } else if (totalMinutesDiff > 30) {
        std::cout << "Early" << "\n";

        if (totalMinutesDiff < 60) {
            printf("%d minutes before the start", totalMinutesDiff);
        } else if (totalMinutesDiff >= 60) {
            printf("%d:%02d hours before the start", hoursDiff, minutesDiff);
        }

    } else if (totalMinutesDiff < 0) {
        std::cout << "Late" << "\n";

        if (totalMinutesDiff > -60) {
            printf("%d minutes after the start", abs(totalMinutesDiff));
        } else if (totalMinutesDiff <= -60) {
            printf("%d:%02d hours after the start", abs(hoursDiff), abs(minutesDiff));
        }
    }


    return 0;
}