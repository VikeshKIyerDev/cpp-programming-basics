// Print the reverse of a string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string rev_str = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev_str += str[i];
    }

    cout << "Reversed string: " << rev_str << endl;
    return 0;
}