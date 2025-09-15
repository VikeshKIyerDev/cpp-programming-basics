//Character Count: Count the number of occurrences of a character in a string.
#include <iostream>
#include <string>
using namespace std;
int main() {
    int count = 0;
    char ch;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a character to count: ";
    cin >> ch;
    for (int c = 0; c < str.length(); c++) {
        if (str[c] == ch) {
            count++;
        }
    }
    cout << ch << " appears " << count << " times" << endl;
    return 0;
}