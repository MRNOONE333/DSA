#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";        
        sort(strs.begin(), strs.end());
        
        int m = strs[0].size();
        string ans = "";

        for (int i = 0; i < m; i++) {
            if (strs[0][i] == strs.back()[i])
                ans.push_back(strs[0][i]);
            else
                break;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<string> strs = {"flower", "flow", "flight"};
    
    string result = solution.longestCommonPrefix(strs);
    
    cout << result << endl;
    
    return 0;
}
