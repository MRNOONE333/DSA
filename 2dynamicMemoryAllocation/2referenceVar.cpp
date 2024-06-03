#include <iostream>
using namespace std;

void increment(int x) {   // if we remove & from here it will print 10,10
    x += 1; // Increment the referenced value
}

int main() {
    int x = 10;

    cout << "Original value of x: " << x << endl;

    increment(x); // Pass i by reference

    cout << "Value of i after increment: " << x << endl;

}
// Original value of x: 10
// Value of i after increment: 10
