#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int minStepsUsingDp(int n) {
    if (n <= 1) return 0;
    
    // Initialize dp array with maximum values
    vector<int> dp(n + 1, INT_MAX);
    
    // Base 
    dp[1] = 0;
    
    // Fill the dp array
    for (int i = 2; i <= n; i++) {
        // Step from i-1
        dp[i] = dp[i - 1] + 1;
        
        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
        
    }
    
    return dp[n];
}

int main() {
    int n;
    cout << "input no: " << endl;
    cin >> n;
    cout << minStepsUsingDp(n) << endl;
    return 0;
}