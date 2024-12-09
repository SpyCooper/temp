#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    string correct_sequence[4] = {".U", "XE", "yF", "LT"};
    string entered_sequence[4];
    bool correct = false;
    while (!correct) {
        for (int i = 0; i < 4; ++i) {
            cout << "Enter the first two character (" << i + 1 << "/4): ";
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
            cout << "\n\nYou've opened the lock with the key. Congratulations!" << endl;
            cout << "The final prompt is:" << endl;
            cout << "The a lock and key to be hold somethine. Open the door and you'll see...\n\n" << endl;
        } else {
            cout << "The lock does not open." << endl;
        }
    }

    return 0;
}