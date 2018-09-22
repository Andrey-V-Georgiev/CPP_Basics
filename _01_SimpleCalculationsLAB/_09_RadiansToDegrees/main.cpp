#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double rad;
    cin >> rad;
    double degree = rad * 57.29578;
    cout << round(degree) << endl;

    return 0;
}