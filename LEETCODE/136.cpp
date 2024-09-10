#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNum(vector<int>& nums) {
        int singleNumber = 0;

        for (int i = 0; i < nums.size(); i++) {
            singleNumber = singleNumber ^ nums[i];
        }

        return singleNumber;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 2, 1};

    int result = sol.singleNum(nums);

    cout << "single number : " << result << endl;

    return 0;
}
