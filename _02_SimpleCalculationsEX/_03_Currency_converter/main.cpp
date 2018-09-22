#include <iostream>
#include <string>

using namespace std;

int main() {

    double amount;
    string input_currency, output_currency;

    cin >> amount;
    cin >> input_currency;
    cin >> output_currency;
    static double value_in_BGN;
    static double output_double;

    if (input_currency == "BGN") {
        value_in_BGN = amount * 1;
    } else if (input_currency == "USD") {
        value_in_BGN = amount * 1.79549;
    } else if (input_currency == "EUR") {
        value_in_BGN = amount * 1.95583;
    } else if (input_currency == "GBP") {
        value_in_BGN = amount * 2.53405;
    }

    if (output_currency ==  "BGN") {
        output_double = value_in_BGN;
    } else if (output_currency ==  "USD") {
        output_double = value_in_BGN / 1.79549;
    } else if (output_currency ==  "EUR") {
        output_double = value_in_BGN /  1.95583;
    } else if (output_currency ==  "GBP") {
        output_double = value_in_BGN /  2.53405;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << output_double << endl;

    return 0;
}