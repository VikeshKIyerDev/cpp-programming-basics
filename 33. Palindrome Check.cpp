// Check if a number is a palindrome. 

#include <iostream>
using namespace std;

int main() {
    int num, original_num, reversed_num = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    original_num = num;
    while (num > 0) { // loop to reverse the number
        digit = num % 10; // this step seperates the last digit
        reversed_num = (reversed_num * 10) + digit; // the last digit is then added to the reversed number
        num /= 10; // this step removes the last digit from the original number
    }
    if (original_num == reversed_num) {
        cout << original_num << " is a palindrome." << endl;
    } else {
        cout << original_num << " is not a palindrome." << endl;
    }
    return 0;
}