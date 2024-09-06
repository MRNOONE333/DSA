#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        int n = v.size();
        for(int i = n - 1; i >= 0; i--) {
            if(i == n - 1)
                v[i]++;
            if(v[i] == 10) {
                v[i] = 0;
                if(i != 0) {
                    v[i - 1]++;
                } else {
                    v.push_back(0); // Expand vector to handle the carry
                    v[i] = 1;       // Set the first digit to 1
                }
            }
        }
        return v;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {4,3,2,1};

    vector<int> result = sol.plusOne(digits);

    // Output the result
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
