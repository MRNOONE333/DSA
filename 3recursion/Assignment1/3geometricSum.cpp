#include <iostream>
#include <iomanip> // Include the iomanip library for std::fixed and std::setprecision
using namespace std;

double geometricSum(int k) {
    // Base case
    if (k == 0)
        return 1;
    // Recursive case
    else
        return 1.0 / (1 << k) + geometricSum(k - 1);
}

int main() {
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Geometric sum for k = " << k << " is: ";
    cout << fixed << setprecision(5) << geometricSum(k) << endl; // Set precision to 5 decimal places
    return 0;
}
