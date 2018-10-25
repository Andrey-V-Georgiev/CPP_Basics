#include <iostream>
#include <string>

int main() {

    std::string rightPassword = "s3cr3t!P@ssw0rd";
    std::string userInput;
    std::cin >> userInput;

    if (userInput == rightPassword) {
        std::cout << "Welcome" << std::endl;
    } else {
        std::cout << "Wrong password!" << std::endl;
    }

    return 0;
}