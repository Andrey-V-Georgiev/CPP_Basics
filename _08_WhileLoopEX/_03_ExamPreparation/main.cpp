#include <iostream>

int main() {

    int badScore;
    std::cin >> badScore;
    std::cin.ignore();

    std::string exerciseName;
    double currentScore;

    double scoreSum = 0;
    int badScoreCount = 0;
    int numberOfProblems = 0;
    std::string prevExerciseName;

    while (badScoreCount < badScore) {

        std::getline(std::cin, exerciseName);

        if (exerciseName == "Enough") {
            printf("Average score: %.2f\n", scoreSum / numberOfProblems);
            printf("Number of problems: %d\n", numberOfProblems);
            printf("Last problem: %s\n", prevExerciseName.c_str());
            return 0;
        }

        prevExerciseName = exerciseName;
        std::cin >> currentScore;
        std::cin.ignore();
        scoreSum += currentScore;
        numberOfProblems++;
        if (currentScore <= 4) {
            badScoreCount++;
        }
    }

    printf("You need a break, %d poor grades.", badScore);

    return 0;
}