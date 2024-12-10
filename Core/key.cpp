#include <iostream>
#include <string>

using namespace std;

int main() {
    int input;
    int correct_sequence[4] = {11, 11, 11, 1};
    int entered_sequence[4];
    bool correct = false;

    while (!correct) {
        for (int i = 0; i < 4; ++i) {
            cout << "Enter a number (" << i + 1 << "/4): ";
            cin >> input;
            entered_sequence[i] = input;
        }

        correct = true;
        for (int i = 0; i < 4; ++i) {
            if (entered_sequence[i] != correct_sequence[i]) {
                correct = false;
                break;
            }
        }

        if (correct) {
            cout << "\n\nYou've found the correct sequence! Yippie!" << endl;
            cout << "The next prompt is:" << endl;
            cout << "The key to find the lock is the key itself." << endl;
            cout << "Find the pairing that matches the key.\n\n" << endl;
        } else {
            cout << "That is not the key." << endl;
        }
    }

    return 0;
}