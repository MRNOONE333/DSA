#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;        
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    
    int index = solution.searchInsert(nums, target);
    cout << "Index of target " << target << " is: " << index << endl;
    
    return 0;
}
