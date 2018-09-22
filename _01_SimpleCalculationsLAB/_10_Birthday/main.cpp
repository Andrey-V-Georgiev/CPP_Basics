#include <iostream>
using namespace std;

int main() {

    double sideA, sideB, h, percent;
    cin >> sideA >> sideB >> h >> percent;
    double volumeCentimeters = sideA * sideB * h;
    double volumeLiters = volumeCentimeters * 0.001;
    double percentValue = percent * 0.01;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << volumeLiters * (1 - percentValue) << endl;

    return 0;
}