#include <iostream>
#include <string>

int main() {

    std::string figureType;
    std::cin >> figureType;
    double figureArea;
    double PI = 3.14159265359;

    if (figureType == "square") {

        double squareSide;
        std::cin >> squareSide;
        figureArea = squareSide * squareSide;

    } else if (figureType == "rectangle") {

        double sideA;
        double sideB;
        std::cin >> sideA;
        std::cin >> sideB;
        figureArea = sideA * sideB;

    } else if (figureType == "circle") {

        double r;
        std::cin >> r;
        figureArea = PI * r * r;

    } else if (figureType == "triangle") {

        double a;
        double h;
        std::cin >> a;
        std::cin >> h;
        figureArea = a * h * 0.5;

    }

    std::printf("%.3f",figureArea);

    return 0;
}