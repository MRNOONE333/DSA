#include <iostream>
#define mod 999999999
using namespace std;

// recursive 
long long int countBT(int h) {
    // Base cases
    if (h == 0 || h == 1) {
        return 1;
    }

    // Recursive calls for heights h-1 and h-2
    long long int x = countBT(h - 1);
    long long int y = countBT(h - 2);

    // Formula for calculating balanced binary trees of height h
    long long int res = (x * ((2 * y) % mod + x) % mod) % mod;

    return res;
}

int main() {
    int h;
    cout << "Enter height: ";
    cin >> h;
    cout << countBT(h) << endl;
}
