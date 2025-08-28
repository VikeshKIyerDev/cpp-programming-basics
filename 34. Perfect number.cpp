// Check if a number is a perfect number (sum of divisors equals the number)
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= num/2 ; i++) {
        if (num % i == 0) {
            sum += i; // add the divisor to sum
        }
    }
    if (sum == num) { // if sum and num are equal, it is a perfect number 
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;   
}