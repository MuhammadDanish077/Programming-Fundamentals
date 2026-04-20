#include <iostream>
using namespace std;
float calculateSalary(float base, int score, int experience)
{
    float bonusPercent = 0.0;
    if (score >= 90)
    {
        bonusPercent = 0.20;
    }
    else if (score >= 75)
    {
        bonusPercent = 0.10;
    }
    else
    {
        bonusPercent = 0.05;
    }
    if (experience >= 5)
    {
        bonusPercent += 0.05;
    }
    float totalBonus;
    totalBonus = base * bonusPercent;
    float finalSalary;
    finalSalary = base + totalBonus;
    return finalSalary;
}

int main()
{
    float base;
    int score, experience;
    cout << "Enter Base Salary: ";
    cin >> base;
    cout << "Enter Performance Score: ";
    cin >> score;
    cout << "Enter Years of Experience: ";
    cin >> experience;
    float result = calculateSalary(base, score, experience);
    cout << "The Final Salary is: " << result << endl;
    return 0;
}