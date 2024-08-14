#include <iostream>

using namespace std;

int main() {
    // 1 - 1;
    // 10 - 2;
    // 199 - 3;
    // 0 - 1
    // -0 - 1
    // -455 - 3
    int numOfDigits = 0;
    int input;
    cout << "enter input: ";
    cin >> input;
    if (input == 0) { // didn't even think about this case?
        cout << "number of digits: 1" << endl;
        return 0;
    } else {
        if (input < 0) { // very important to tackle all the cases. Covering all the cases is as important as speed. 
            input *= -1;
        }
        while (input >= 1) {
            numOfDigits++;
            input /= 10;
        }
    }

    cout << "number of digits: " << numOfDigits << endl;

    return 0;
}