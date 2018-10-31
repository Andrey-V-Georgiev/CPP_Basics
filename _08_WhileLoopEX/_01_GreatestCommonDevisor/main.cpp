#include <iostream>

int main() {

    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }

    std::cout << a << "\n";

    return 0;
}