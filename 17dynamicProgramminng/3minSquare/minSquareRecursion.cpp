#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int numSquares(int n) {
    // Base case
    if (n == 0) return 0;

    int minSquares = INT_MAX;

    // Try every square number till i^2  = square root of n
    for (int i = 1; i * i <= n; i++) {
        // Recur for n - i*i and add 1 to the result for the square number used
        minSquares = min(minSquares, numSquares(n - i * i) + 1);
    }

    return minSquares;
}

int main() {
    int n;
    cout << "Enter no. : ";
    cin >> n;
    cout << numSquares(n) << endl;
    return 0;
}
