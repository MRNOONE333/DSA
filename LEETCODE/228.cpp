class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if (n == 0) return result;
        
        for (int i = 0; i < n; i++) {
            int start = nums[i];
            // Find the end of the current range
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }
            
            if (start != nums[i]) {
                // If it's a range, add it in the format "start->end"
                result.push_back(to_string(start) + "->" + to_string(nums[i]));
            } else {
                // If it's a single number, just add it as a string
                result.push_back(to_string(start));
            }
        }
        
        return result;
    }
};