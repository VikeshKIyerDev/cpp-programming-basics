//  Calculate the power of a number using recursion.
#include <iostream>
using namespace std;

int power( int base, int exponent ) {
    if (exponent == 0) return 1; // when exponent is 0, return 1 (end of recursion)
    return base * power(base, exponent - 1); // recursive call, with each call reducing exponent by 1
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;
    return 0;
}