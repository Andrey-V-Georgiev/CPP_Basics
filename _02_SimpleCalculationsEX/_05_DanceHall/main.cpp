#include <iostream>
#include <math.h>

int main() {

    double length, width, wardrobe_side;
    std::cin >> length >> width >> wardrobe_side;

    double hall_area = (length * 100) * (width * 100);
    double wardrobe_area = (wardrobe_side * 100) * (wardrobe_side * 100);
    double bench_area = hall_area / 10;
    double active_area = hall_area - wardrobe_area - bench_area;
    double one_dancer_area = 40 + 7000;
    double dancers_capacity = active_area / one_dancer_area;

    std::cout << floor(dancers_capacity) << std::endl;

    return 0;
}