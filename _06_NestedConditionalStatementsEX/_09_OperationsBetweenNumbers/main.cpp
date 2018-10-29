#include <iostream>
#include <math.h>

int main() {

    int N1;
    std::cin >> N1;

    int N2;
    std::cin >> N2;

    std::string action;
    std::cin >> action;

    if (action == "+" || action == "-" || action == "*") {

        int result = 0;
        if (action == "+") {
            result = N1 + N2;
        } else if (action == "-") {
            result = N1 - N2;
        } else if (action == "*") {
            result = N1 * N2;
        }

        std::string resultType = result % 2 == 0 ? "even" : "odd";
        printf("%d %s %d = %d - %s", N1, action.c_str(), N2, result, resultType.c_str());

    } else if (action == "/") {

        if (N2 != 0) {
            printf("%d / %d = %.2f", N1, N2, (double) N1 / (double) N2);
        } else {
            printf("Cannot divide %d by zero", N1);
        }

    } else if (action == "%") {

        if (N2 != 0) {
            printf("%d %% %d = %d", N1, N2, N1 % N2);
        } else {
            printf("Cannot divide %d by zero", N1);
        }

    }

    return 0;
}