// Calculate the factorial of a number. 
#include <iostream>
using namespace std;
int main() {
    int n;
    int factorial = 1;

    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        factorial *= i; 
    }
    return 0;
}