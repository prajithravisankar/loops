#include <iostream>
using namespace std;

int main() {
    // given starting number and ending number print everything in the range
    int start;
    int end;
    cout << "enter start and end: ";
    cin >> start >> end;

    if (start == end) {
        cout << "nothing to print";
        return 0;
    } else if (start > end) {
        cout << "wrong type of inputs";
        return 0;
    } else {
        while (start <= end) {
            cout << start << endl;
            start += 1;
        }
    }
    return 0;
}