#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main() {
    Solution solution;
    int n, val;

    cout<<"number of elements in the array: ";
    cin >>n;

    vector<int> nums(n);
    cout << "elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout <<"Enter the value to remove: ";
    cin >>  val;

    int newSize = solution.removeElement(nums, val);

    cout<< "Array after removing " << val << ": ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout <<"\n new size of the array: " << newSize << endl;

    return 0;
}
// output-
// number of elements in the array: 4
// elements of the array: 3 2 2 3
// Enter the value to remove: 3
// Array after removing 3: 2 2 
//  new size of the array: 2