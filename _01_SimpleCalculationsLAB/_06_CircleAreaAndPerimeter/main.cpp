#include <iostream>

int main() {

    double r;
    std::cin >> r;
    double PI = 3.14159265359;
    double area = PI * r * r;
    double perimeter = 2 * PI * r;

    std::cout << "Area = " << area << std::endl;
    std::cout << "Perimeter = " << perimeter << std::endl;

    return 0;
}