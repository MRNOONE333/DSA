#include <iostream>
using namespace std;

int main() {
    int *p = new int[5]{1, 2, 3, 4, 5};  // Allocate an array of size 5 and initialize with values
    cout << "*p: " << *p << ", p: " << p << endl;

    delete[] p;  // Deallocate the dynamically allocated array

    // The following line will result in undefined behavior
    // because you are dereferencing a pointer that has been deleted.
    cout << "*p: " << *p << endl;

    return 0;
}

// *p: 1, p: 0x1051848
// *p: 17110912
