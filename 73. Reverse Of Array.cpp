// Reverse an Array: Reverse the order of elements in an array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = n - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }
    return 0;
}