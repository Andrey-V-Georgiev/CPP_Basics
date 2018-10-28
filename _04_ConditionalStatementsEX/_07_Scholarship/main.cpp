#include <iostream>
#include <math.h>

int main() {

    double income;
    std::cin >> income;

    double averageSchoolScore;
    std::cin >> averageSchoolScore;

    double minimumSalary;
    std::cin >> minimumSalary;

    double socialScholarship = 0;
    bool socialScholarshipRights = false;
    double excellentScoreScholarship = 0;
    bool excellentScoreScholarshipRights = false;

    if (income < minimumSalary && averageSchoolScore > 4.5) {
        socialScholarshipRights = true;
        socialScholarship = minimumSalary * 0.35;
    }

    if (averageSchoolScore >= 5.5) {
        excellentScoreScholarshipRights = true;
        excellentScoreScholarship = averageSchoolScore * 25;
    }

    if (!socialScholarshipRights && !excellentScoreScholarshipRights) {
        std::cout << "You cannot get a scholarship!" << "\n";
    } else if (socialScholarshipRights && socialScholarship > excellentScoreScholarship) {
        int socialScholarshipFloored = (int) floor(socialScholarship);
        printf("You get a Social scholarship %d BGN", socialScholarshipFloored);
    } else if (excellentScoreScholarshipRights && excellentScoreScholarship >= socialScholarship) {
        int excellentScoreScholarshipFloored = (int) floor(excellentScoreScholarship);
        printf("You get a scholarship for excellent results %d BGN", excellentScoreScholarshipFloored);
    }

    return 0;
}