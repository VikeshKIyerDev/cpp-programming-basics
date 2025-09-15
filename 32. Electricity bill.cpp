// Calculate the electricity bill based on slab rates.

#include <iostream>
using namespace std;
int main(){
    int units;
    float total;
    cout << "Enter Units Consumed: ";
    cin >> units;
    
    if (units<=50){
        total = units*16.5;
        cout << "total bill- " << total << endl;
    } else if (units<=150) {
        total = (units * 16.5) + (units - 50) * 24.5;
        cout << "total bill- " << total << endl;
    } else if (units<=300) {
        total = (units * 16.5) + (units * 24.5) + (units - 150) * 32.5;
        cout << "total bill- " << total << endl; 
    } else if (units>300) {
        total = (units * 16.5) + (units * 24.5) + (units * 32.5) + (units - 300) * 40.5;
        cout << "total bill- " << total << endl; 
    }
    
    return 0;
}