//  Print all prime numbers up to n. 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    for (int num = 2; num <= n; num++) { // taking numbers from 2 to the given number
        bool isPrime = true;
        for (int i = 2; num>= i*i; i++) { // to check each number if it is divisible by any number till sqrt(num)
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " " ;
        }
    }
    cout << endl;
    return 0;
}