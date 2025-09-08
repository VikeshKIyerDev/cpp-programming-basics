// Find the Fibonacci series up to n terms.
#include <iostream>
using namespace std;
int main() {
    int n, a=0, b=1, next_term;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        next_term = a + b;
        cout << " " << next_term;
        a = b;
        b = next_term;
    }
    cout << endl;
    return 0;
}