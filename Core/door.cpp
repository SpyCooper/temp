#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    bool correct = false;
    while (!correct) {
        cout << "The door can be opened with a joke, but what type of joke?" << endl;

        getline(cin, input);

        if (input.find("dad") != string::npos && input.find("joke") != string::npos) {
            correct = true;
        }

        if (correct) {
            cout << "\n\nThere is a small flag in the behind the door..." << endl;
            cout << "Congratulations on finishing the CTF!\n\n" << endl;
        } else {
            cout << "The door does not budge." << endl;
        }
    }

    return 0;
}