//Find the least common multiple (LCM) of two numbers. 
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for (int i = 1; i <= num1 * num2; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            cout << "LCM is: " << i << endl;
            break;
        }
    }
}