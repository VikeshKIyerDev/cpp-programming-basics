//Find the greatest common divisor (GCD) of two numbers. 
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << "HCF is: " << i << endl;
            break;
        }
    }
    return 0;
}