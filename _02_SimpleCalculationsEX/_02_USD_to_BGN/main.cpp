#include <iostream>
using namespace std;

int main() {

    double exchange_rate = 1.79549;
    double usd;
    cin >> usd;
    double bgn = exchange_rate * usd;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << bgn << endl;

    return 0;
}