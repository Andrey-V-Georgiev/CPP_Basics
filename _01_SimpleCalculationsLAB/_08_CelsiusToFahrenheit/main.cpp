#include <iostream>

int main() {

    double celsius;
    std::cin >> celsius;
    double fahrenheit = celsius * 1.8 + 32.0;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << fahrenheit << std::endl;

    return 0;
}