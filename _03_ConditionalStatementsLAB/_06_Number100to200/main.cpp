#include <iostream>

int main() {

    int inputNumber;
    std::cin >> inputNumber;

    if (inputNumber < 100) {
        std::cout << "Less than 100" << std::endl;
    } else if (inputNumber >= 100 && inputNumber <= 200) {
        std::cout << "Between 100 and 200" << "\n";
    } else {
        std::cout << "Greater than 200" << std::endl;
    }

    return 0;
}