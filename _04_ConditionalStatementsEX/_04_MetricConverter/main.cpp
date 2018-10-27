#include <iostream>

int main() {

    double inputNumber;
    std::cin >> inputNumber;

    std::string inputMeasure;
    std::cin >> inputMeasure;

    std::string outputMeasure;
    std::cin >> outputMeasure;

    double inputToMeters;
    double output;

    if (inputMeasure == "m") {
        inputToMeters = inputNumber;
    } else if (inputMeasure == "mm") {
        inputToMeters = inputNumber / 1000;
    } else if (inputMeasure == "cm") {
        inputToMeters = inputNumber / 100;
    } else if (inputMeasure == "mi") {
        inputToMeters = inputNumber / 0.000621371192;
    } else if (inputMeasure == "in") {
        inputToMeters = inputNumber / 39.3700787;
    } else if (inputMeasure == "km") {
        inputToMeters = inputNumber / 0.001;
    } else if (inputMeasure == "ft") {
        inputToMeters = inputNumber / 3.2808399;
    } else if (inputMeasure == "yd") {
        inputToMeters = inputNumber / 1.0936133;
    }

    if (outputMeasure == "m") {
        output = inputToMeters;
    } else if (outputMeasure == "mm") {
        output = inputToMeters * 1000;
    } else if (outputMeasure == "cm") {
        output = inputToMeters * 100;
    } else if (outputMeasure == "mi") {
        output = inputToMeters * 0.000621371192;
    } else if (outputMeasure == "in") {
        output = inputToMeters * 39.3700787;
    } else if (outputMeasure == "km") {
        output = inputToMeters * 0.001;
    } else if (outputMeasure == "ft") {
        output = inputToMeters * 3.2808399;
    } else if (outputMeasure == "yd") {
        output = inputToMeters * 1.0936133;
    }

    printf("%.8f", output);

    return 0;
}