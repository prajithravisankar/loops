#include <iostream>

using namespace std;

int main() {
    // do 1 + 2 + 3 + 4 + 5 in while loop
    int i = 0;
    int sum = 0;
    while (i < 6) {
        sum += i;
        i += 1;
    }

    cout << "i = " << i << endl;
    cout << "sum = " << sum << endl;

    return 0;
}