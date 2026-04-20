#include <iostream>
#include <cmath>
using namespace std;
string projectTimeCalculation(int neededHrs, int days, int workers) {
    double effectiveDays = days * 0.90;
    double totalHrs = effectiveDays * 10 * workers;
    int finalHrs = floor(totalHrs);
    if (finalHrs >= neededHrs)
     {
        int left = finalHrs - neededHrs;
        cout<<"YES! "<<left<<" hours left";
    } else 
    {
        int needed = neededHrs - finalHrs;
        cout<<"NOT ENOUGH TIME! "<<needed<<" needed ";
    }
}

int main() {
    int neededHrs, days, workers;
    cout<<"Enter needed hours:";
    cin >> neededHrs;
    cout<<"Enter days:";
    cin >> days;
    cout<<"Enter workers:";
    cin >> workers;
    projectTimeCalculation(neededHrs, days, workers);
    return 0;
}