// Determine the grade of a student based on their marks. 
#include <iostream>
using namespace std;

int main(){
    float CGPA;
    cout << "Enter CGPA: ";
    cin >> CGPA;

    //if else ladder for grading system according to amrita university
    if (CGPA==10.0) {
        cout << "Grade: O";
    } else if (CGPA>=9.5) {
        cout << "Grade: A+";
    } else if (CGPA>=9.0) {
        cout << "Grade: A";
    } else if (CGPA>=8.0) {
        cout << "Grade: B+";
    } else if (CGPA>=7.0) {
        cout << "Grade: B";
    } else if (CGPA>=6.0) {
        cout << "Grade: C";
    } else if (CGPA>=5.0) {
        cout << "Grade: P";
    } else if (CGPA==0.0) {
        cout << "Grade: F";
    } else {
        cout << "Invalid";
    }
    return 0;
}