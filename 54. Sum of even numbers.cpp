// Calculate the sum of all even numbers between 1 and n. 
#include <iostream>
using namespace std;

int main() {
    int n, sum =0;
    cout << "Enter a number: ";
    cin >> n;

    for (int i=2; i<=n; i+=2) {
        sum += i;
    }

    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}