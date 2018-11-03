#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {

    double budget;
    cin >> budget;

    string city;
    cin.ignore();
    getline(cin, city);

    int nightCount;
    cin >> nightCount;

    double allExpenses = 0.0;
    double moneyLeft;

    if (city == "Cairo") {

        allExpenses = nightCount * (250 * 2) + 600;

        if (nightCount > 0 && nightCount < 5) {
            allExpenses *= 0.97;
        } else if (nightCount > 4 && nightCount < 10) {
            allExpenses *= 0.95;
        } else if (nightCount > 9 && nightCount < 25) {
            allExpenses *= 0.90;
        } else if (nightCount > 24 && nightCount < 50) {
            allExpenses *= 0.83;
        } else if (nightCount >= 50) {
            allExpenses *= 0.7;
        }

    } else if (city == "Paris") {

        allExpenses =  nightCount * (150 * 2) + 350;

        if (nightCount > 4 && nightCount < 10) {
            allExpenses *= 0.93;
        } else if (nightCount > 9 && nightCount < 25) {
            allExpenses *= 0.88;
        } else if (nightCount > 24 && nightCount < 50) {
            allExpenses *= 0.78;
        } else if (nightCount >= 50) {
            allExpenses *= 0.7;
        }

    } else if (city == "Lima") {

        allExpenses =  nightCount * (400 * 2) + 850;

        if (nightCount > 24 && nightCount < 50) {
            allExpenses *= 0.81;
        } else if (nightCount >= 50) {
            allExpenses *= 0.7;
        }

    } else if (city == "New York") {

        allExpenses =  nightCount * (300 * 2) + 650;

        if (nightCount > 0 && nightCount < 5) {
            allExpenses *= 0.97;
        } else if (nightCount > 4 && nightCount < 10) {
            allExpenses *= 0.95;
        } else if (nightCount > 9 && nightCount < 25) {
            allExpenses *= 0.88;
        } else if (nightCount > 24 && nightCount < 50) {
            allExpenses *= 0.81;
        } else if (nightCount >= 50) {
            allExpenses *= 0.7;
        }

    } else if (city == "Tokyo") {

        allExpenses =  nightCount * (350 * 2) + 700;

        if (nightCount > 9 && nightCount < 25) {
            allExpenses *= 0.88;
        } else if (nightCount > 24 && nightCount < 50) {
            allExpenses *= 0.83;
        } else if (nightCount >= 50) {
            allExpenses *= 0.7;
        }
    }

    moneyLeft = budget - allExpenses;

    if (moneyLeft >= 0) {
        printf("Yes! You have %.2f leva left.", moneyLeft);
    } else {
        printf("Not enough money! You need %.2f leva.", abs(moneyLeft));
    }

    return 0;
}