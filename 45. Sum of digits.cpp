//Find the sum of digits of a number. 
#include <iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        sum += n % 10; // add the last digit to sum
        n /= 10; // remove the last digit from n
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}