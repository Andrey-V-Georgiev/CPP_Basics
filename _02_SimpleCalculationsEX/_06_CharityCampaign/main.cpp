#include <iostream>

int main() {

    double cake_price =  45;
    double wafer_price = 5.80;
    double pancake_price = 3.20;

    int days_count;
    int confectioners_count;
    int cakes_count;
    int wafers_count;
    int pancake_count;

    std::cin >> days_count >> confectioners_count >> cakes_count >> wafers_count >> pancake_count;

    double cakes_costs_per_day = cakes_count * cake_price;
    double wafers_costs_per_day = wafers_count * wafer_price;
    double pancake_costs_per_day = pancake_count * pancake_price;
    double costs_per_day = cakes_costs_per_day + wafers_costs_per_day + pancake_costs_per_day;
    double all_expenses = costs_per_day * confectioners_count * days_count;
    double saved_money = all_expenses - (all_expenses/8);

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    std::cout << saved_money << std::endl;

    return 0;
}