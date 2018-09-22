#include <iostream>
#include <string>

int main() {

    std::string firstName, lastName, town;
    int age;
    std::cin >> firstName >> lastName;
    std::cin >> age;
    std::cin >> town;
    std::cout
    << "You are "
    << firstName
    << " "
    << lastName
    << ", a "
    << age
    << "-years old person from "
    << town
    << "."
    << std::endl;

    return 0;
}