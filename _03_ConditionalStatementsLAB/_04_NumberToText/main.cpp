#include <iostream>


int main() {

    int input;
    std::cin >> input;

    if (input == 0) {
        std::cout << "zero" << std::endl;
    } else if (input == 1) {
        std::cout << "one" << std::endl;
    } else if (input == 2) {
        std::cout << "two" << std::endl;
    } else if (input == 3) {
        std::cout << "three" << std::endl;
    } else if (input == 4) {
        std::cout << "four" << std::endl;
    } else if (input == 5) {
        std::cout << "five" << std::endl;
    } else if (input == 6) {
        std::cout << "six" << std::endl;
    } else if (input == 7) {
        std::cout << "seven" << std::endl;
    } else if (input == 8) {
        std::cout << "eight" << std::endl;
    } else if (input == 9) {
        std::cout << "nine" << std::endl;
    } else {
        std::cout << "number too big" << std::endl;
    }


    return 0;
}