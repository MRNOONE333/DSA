#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i = 0; i < 31; i++) {
            int ans = pow(2, i); // Calculate 2^i
            
            if(ans == n) return true;
        }
        return false; // If no match, return false
    }
};

int main() {
    Solution solution;
    int n;
    cout << " enter number: ";
    cin >> n;

    if(solution.isPowerOfTwo(n)) {
        cout << n << " yes" << endl;
    } else {
        cout << n << " no" << endl;
    }

    return 0;
}
