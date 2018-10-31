#include <iostream>

int main() {

    double change;
    std::cin >> change;
    int changeInStotinki = change * 100;

    int dva = 200;
    int edin = 100;
    int fifty = 50;
    int twenty = 20;
    int ten = 10;
    int five = 5;
    int two = 2;
    int one = 1;

    int coinsCount = 0;

    if (changeInStotinki / dva > 0) {
        coinsCount += changeInStotinki / dva;
        changeInStotinki = changeInStotinki % dva;
    }
    if (changeInStotinki / edin > 0) {
        coinsCount += changeInStotinki / edin;
        changeInStotinki = changeInStotinki % edin;
    }
    if (changeInStotinki / fifty > 0) {
        coinsCount += changeInStotinki / fifty;
        changeInStotinki = changeInStotinki % fifty;
    }
    if (changeInStotinki / twenty > 0) {
        coinsCount += changeInStotinki / twenty;
        changeInStotinki = changeInStotinki % twenty;
    }
    if (changeInStotinki / ten > 0) {
        coinsCount += changeInStotinki / ten;
        changeInStotinki = changeInStotinki % ten;
    }
    if (changeInStotinki / five > 0) {
        coinsCount += changeInStotinki / five;
        changeInStotinki = changeInStotinki % five;
    } if (changeInStotinki / two > 0) {
        coinsCount += changeInStotinki / two;
        changeInStotinki = changeInStotinki % two;
    } if (changeInStotinki / one > 0) {
        coinsCount += changeInStotinki / one;
        changeInStotinki = changeInStotinki % one;
    }

    printf("%d", coinsCount);

    return 0;
}