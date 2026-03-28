#include <iostream>
#include <string>

using namespace std;

void jazzify(string chords[], int size) {
    for (int i = 0; i < size; i++) {
        string &current = chords[i];
        if (!current.empty() && current.back() != '7') {
            current += "7";
        }
    }
}

int main() {
    int total;
    cout << "Enter the number of chords: ";
    cin >> total;

    string chordList[100]; 

    cout << "Enter " << total << " chords, one per line:" << endl;
    for (int i = 0; i < total; i++) {
        cin >> chordList[i];
    }

    jazzify(chordList, total);

    cout << "Jazzified chords: [";
    for (int i = 0; i < total; i++) {
        cout << chordList[i];
        if (i < total - 1) {
            cout << ", "; 
        }
    }
    cout << "]" << endl;

    return 0;
}