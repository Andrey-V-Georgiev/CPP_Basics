#include <iostream>

int main() {

    int tables_count; std::cin >> tables_count;
    double table_length; std::cin >> table_length;
    double table_width; std::cin >> table_width;

    int price_fabric_square_USD = 9;
    int price_fabric_cover_USD = 7;
    double ex_rate_USD = 1.85;

    double cover_length = table_length + 0.6;
    double cover_width = table_width + 0.6;
    double cover_area = cover_length * cover_width;
    double price_cover_USD = price_fabric_cover_USD * cover_area;
    double price_cover_BGN = price_cover_USD * ex_rate_USD;

    double square_side = table_length / 2;
    double square_area = square_side * square_side;
    double price_square_USD = price_fabric_square_USD * square_area;
    double price_square_BGN = price_square_USD * ex_rate_USD;

    double total_price_covers_USD = price_cover_USD * tables_count;
    double total_price_covers_BGN = price_cover_BGN * tables_count;
    double total_price_squares_USD = price_square_USD * tables_count;
    double total_price_squares_BGN = price_square_BGN * tables_count;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

    std::cout << total_price_covers_USD + total_price_squares_USD << " USD" << std::endl;
    std::cout << total_price_covers_BGN + total_price_squares_BGN << " BGN" << std::endl;

    return 0;
}