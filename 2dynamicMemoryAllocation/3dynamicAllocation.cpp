// See cell 6.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Input n: ";
    cin >> n;

    vector<int> arr(n, 0); // Create a vector with 'n' elements, each initialized to 0

    // Get the size in bytes
    size_t sizeInBytes = sizeof(arr[0]) * arr.size();

    cout << "Size of array in bytes: " << sizeInBytes << endl;

    return 0;
}
  

/*-------------------------------------------------------------------------------------------------------------------------
NOTES-

The size_t type is an unsigned integer type that is commonly used for representing sizes and indices in C++. 
It's defined in the <cstddef> or <stddef.h> header.

--------------------------------------------------------------------------------------------------------------------------*/


