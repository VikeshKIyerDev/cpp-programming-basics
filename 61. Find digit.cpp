// Check for Digit: Check if a string contains a digit.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool has_digit = false;
    
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = str.length() - 1; i >= 0; i--) {
        if (isdigit(str[i]) == true ) {
            has_digit = true;
            break;
        }
    }

    if (has_digit == true) {
        cout << "The string has a digit" << endl;
    } else {
        cout << "The string does not have digits" << endl;
    }

    return 0;
}