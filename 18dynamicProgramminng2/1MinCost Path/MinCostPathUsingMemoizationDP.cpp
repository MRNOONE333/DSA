#include <iostream>
#include <vector>
#include <climits>   
#include <algorithm>    
using namespace std;    
using std::min;         

int minCostMemo(vector<vector<int>>& cost, int m, int n, vector<vector<int>>& memo) {
    if (m < 0 || n < 0)
        return INT_MAX;
    if (m == 0 && n == 0)
        return cost[m][n];

    if (memo[m][n] != -1)
        return memo[m][n];

    int minCost1 = minCostMemo(cost, m - 1, n - 1, memo);
    int minCost2 = minCostMemo(cost, m - 1, n, memo);
    int minCost3 = minCostMemo(cost, m, n - 1, memo);

    memo[m][n] = cost[m][n] + min(minCost1, min(minCost2, minCost3));

    return memo[m][n];
}

int minCost(vector<vector<int>>& cost, int m, int n) {
    // Initialize memo table with -1
    vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1)); 

    return minCostMemo(cost, m, n, memo);
}

int main() {
    vector<vector<int>> cost = { { 1, 2, 3 },
                                 { 4, 8, 2 },
                                 { 1, 5, 3 } };

    cout <<  minCost(cost, 2, 2) << endl;

    return 0;
}
