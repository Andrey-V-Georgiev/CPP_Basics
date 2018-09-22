#include <iostream>

int main() {

    double a, h;
    std::cin >> a >> h;
    double area = a * h / 2;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << "Triangle area = " << area << std::endl;

    return 0;
}