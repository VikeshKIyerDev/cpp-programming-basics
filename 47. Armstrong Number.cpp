// Check if a number is Armstrong (sum of cubes of its digits equals the number).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp_num, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp_num = num;

    while (temp_num !=0) {
        digit = temp_num % 10;
        sum += pow(digit, 3);
        temp_num /= 10;
    }

    if (sum == num){
        cout << num << " is an armstrong number" << endl;
    }
    else{
        cout << num << " is not an armstrong number" << endl;
    }
    return 0;
    
}