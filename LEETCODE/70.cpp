#include <iostream>
using namespace std;

class Solution {
private:
    int ncr(int n, int r) {
        double sum = 1;
        for (int i = 1; i <= r; i++) {
            sum = sum * (n - r + i) / i;
        }
        return (int)sum;
    }

public:
    int climbStairs(int n) {
        int ans = 1;
        for (int i = 1; i <= n / 2; i++) {
            int x = ncr(n - i, i);
            ans += x;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter the number of steps: ";
    cin >> n;

    int result = solution.climbStairs(n);

    cout << result << endl;

    return 0;
}
