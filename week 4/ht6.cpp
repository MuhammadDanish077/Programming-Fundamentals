#include <iostream>
using namespace std;
int main(){
    float speed;
    cin>>speed;
    if (speed > 1000) {
    cout << "Extremely Fast" << endl;
} else if (speed > 150) {
    cout << "Ultra Fast" << endl;
} else if (speed > 50) {
    cout << "Fast" << endl;
} else if (speed > 10) {
    cout << "Average" << endl;
} else {
    cout << "Slow" << endl;
    }}