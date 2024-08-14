#include <iostream>

using namespace std;

int main() {
    int start = 1;
    int end;
    cout << "enter the end: ";
    cin >> end;

    while (start <= end) {
        if (start % 3 == 0) {
            cout << start << " ";
        }
        start++;
    }

    return 0;
}