#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> 
using namespace std;

int minCost(vector<vector<int>>& matrix, int i, int j) {
    int M = matrix.size();
    int N = matrix[0].size();

    if (i == M-1 && j == N-1) {
        return matrix[i][j];
    }
    int costRight = INT_MAX, costDown = INT_MAX, costDiagonal = INT_MAX;
    if (j < N-1) {
        costRight = minCost(matrix, i, j + 1);
    }
    if (i < M-1) {
        costDown = minCost(matrix, i + 1, j);
    }
    if (i < M-1 && j < N-1) {
        costDiagonal = minCost(matrix, i + 1, j + 1);
    }

    return matrix[i][j] + min({costRight, costDown, costDiagonal}); // corrected
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 8, 2},
        {1, 8, 3}
    };

    int result = minCost(matrix, 0, 0);
    cout << result << endl;
    return 0;
}
