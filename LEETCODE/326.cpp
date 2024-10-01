#include <iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0) {
            return false;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }
};

int main() {
    Solution solution;

    int testCases[] = {27, 9, 1, 0, 6, 81, -3};
    for (int n : testCases) {
        bool result = solution.isPowerOfThree(n);
        cout << "Is " << n << " a power of three? " << (result ? "Yes" : "No") << endl;
    }

    return 0;
}
