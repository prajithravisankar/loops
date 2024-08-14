#include <iostream>

using namespace std;

int main() {
    // read 2 numbers x and y and compute x ^ y;
    // 2 and 3 meand 2^3 = 8
    int x, y, result = 1;
    cout << "enter x and y: ";
    cin >> x >> y;
    while (y > 0) {
        result *= x;
        y -= 1;
    }

    cout << "result is : " << result;
    return 0;
}