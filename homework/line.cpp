#include <iostream>
using namespace std;
int main() {
    // print line of characters for input N
    // ex: 5 and '*' should pring *****
    cout << "enter a character to print: ";
    char input1;
    cin >> input1;
    int input2;
    cout << "enter number of times to print: ";
    cin >> input2;

    while(input2 != 0) {
        cout << input1 << " ";
        input2 -= 1;
    } 
    return 0;
}