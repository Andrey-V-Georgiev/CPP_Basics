#include <iostream>
#include <math.h>

int main() {

    double partyPrice;
    std::cin >> partyPrice;

    int loveMessagesCount;
    std::cin >> loveMessagesCount;

    int rosesCount;
    std::cin >> rosesCount;

    int keychainCount;
    std::cin >> keychainCount;

    int calculatorsCount;
    std::cin >> calculatorsCount;

    int luckySurpriseCount;
    std::cin >> luckySurpriseCount;

    double sum = (loveMessagesCount * 0.60) + (rosesCount * 7.2) + (keychainCount * 3.60) + (calculatorsCount * 18.20) + (luckySurpriseCount * 22);
    int articlesCount = loveMessagesCount + rosesCount + keychainCount + calculatorsCount + luckySurpriseCount;
    double discount = 0;

    if (articlesCount >= 25) {
        discount = sum * 0.35;
    }

    double totalSum = sum - discount;
    double hostingExpenses = totalSum * 0.10;
    double profit = totalSum - hostingExpenses;
    double diff =  profit - partyPrice;

    if (diff >= 0) {
        printf("Yes! %.2f lv left.", diff);
    } else {
        printf("Not enough money! %.2f lv needed.", abs(diff));
    }

    return 0;
}