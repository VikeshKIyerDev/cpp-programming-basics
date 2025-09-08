// Reverse a number. 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        cout << n%10 << " "; // print the last digit
        n /= 10; // remove the last digit from n
    }
    return 0;
}