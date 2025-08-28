//Find the day of the week based on a number (1-7).

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number (1-7): ";
    cin >> num;
    cout << "it is a ";
    switch(num) { // switch case ladder
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "wrong input! please enter a number between 1 and 7." << endl;
    }
}