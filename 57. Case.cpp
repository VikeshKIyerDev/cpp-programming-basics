// Convert to Uppercase/Lowercase: Convert a string to uppercase or lowercase.

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = str.length(); i >= 0; i--) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // Convert to lowercase
        }
    }
    cout << str << endl;
    return 0;
}