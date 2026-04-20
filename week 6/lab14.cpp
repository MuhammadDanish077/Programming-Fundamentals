#include <iostream> 
#include<iomanip>
using namespace std;
void pool(int v, int f1, int f2, float h)
{
     float towat; float pool; float p1; float p2;
    towat = (f1 + f2) * h;
    if (towat <= v)
    {
        pool = (towat / v) * 100;
        p1 = (f1 * h / towat) * 100;
        p2 = (f2 * h / towat) * 100;
        cout << "The pool is " << pool << "% full.Pipe 1: " << p1 << "%. Pipe 2: " << p2 << "%.";
    }
    else
    {
        pool = towat - v;
        cout << "For " << h << " hours the pool overflows with " << pool << " liters.";
    }
}

int main()
{
    float v, f1, f2, h;
    cout << "Enter volume of pool in liters: ";
    cin >> v;
    cout << "Enter flow rate of the first pipe per hour: ";
    cin >> f1;
    cout << "Enter flow rate of the second pipe per hour: ";
    cin >> f2;
    cout << "Enter the hours that the worker is absent: ";
    cin >> h;
    pool(v, f1, f2, h);
}