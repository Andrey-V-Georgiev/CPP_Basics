#include <iostream>
#include <string>

int main() {

    std::string searchedBook;
    std::getline(std::cin, searchedBook);

    int capacity;
    std::cin >> capacity;

    std::string input;
    std::cin.ignore();
    std::getline(std::cin, input);

    for (int i = 0; i < capacity; i++) {

        if (searchedBook == input) {
            printf("You checked %d books and found it.", i);
            return 0;
        }
        std::getline(std::cin, input);
    }

    std::cout << "The book you search is not here!" << "\n";
    printf("You checked %d books.", capacity);


    return 0;
}