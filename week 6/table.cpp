#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    
    cout << "Enter 9 numbers for a 3x3 grid:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        int rowSum = 0;
        for(int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of Row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}