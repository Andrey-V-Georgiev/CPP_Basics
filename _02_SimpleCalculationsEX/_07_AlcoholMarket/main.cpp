#include <iostream>
#include <iomanip>

int main() {

    double whiskey_price;
    std::cin >> whiskey_price;

    double beer_volume;
    std::cin >> beer_volume;
    double wine_volume;
    std::cin >> wine_volume;
    double rakia_volume;
    std::cin >> rakia_volume;
    double whiskey_volume;
    std::cin >> whiskey_volume;

    double rakia_price = whiskey_price / 2;
    double wine_price = rakia_price * 0.6;
    double beer_price = rakia_price * 0.2;

    double whiskey_total_expenses = whiskey_price * whiskey_volume;
    double rakia_total_expenses = rakia_price * rakia_volume;
    double wine_total_expenses = wine_price * wine_volume;
    double beer_total_expenses = beer_price * beer_volume;

    double total_expenses = whiskey_total_expenses
                            + rakia_total_expenses
                            + wine_total_expenses
                            + beer_total_expenses;

    std::cout << std::setprecision(2) << std::fixed << total_expenses << '\n';

    return 0;
}