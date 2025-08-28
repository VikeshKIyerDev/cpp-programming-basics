// Find the roots of a quadratic equation.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        cout << "Roots are: " << root1 << " and " << root2 << endl;
    } else {
        cout << "No real roots." << endl;
    }
    return 0;
}