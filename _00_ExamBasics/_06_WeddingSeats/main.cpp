#include <iostream>
#include <string>
#include <math.h>

int main() {

    char lastSectorChar;
    std::cin >> lastSectorChar;
    int sectorsCount = (int) lastSectorChar - 64;

    int initialRows;
    std::cin >> initialRows;

    int oddRowSeatCount;
    std::cin >> oddRowSeatCount;

    int totalSeatsCount = 0;

    for (int sector = 1; sector <= sectorsCount; sector++) {

        for (int row = 1; row < initialRows + sector; row++) {

            if (row % 2 == 0) {
                int seatsCount = oddRowSeatCount + 2;
                for (int i = 0; i < seatsCount; i++) {
                    totalSeatsCount++;
                    printf("%c%d%c\n", (char) sector + 64, row, (char) i + 97);
                }
            } else {
                int seatsCount = oddRowSeatCount;
                for (int i = 0; i < seatsCount; i++) {
                    totalSeatsCount++;
                    printf("%c%d%c\n", (char) sector + 64, row, (char) i + 97);
                }
            }
        }
    }

    std::cout << totalSeatsCount << std::endl;

    return 0;
}