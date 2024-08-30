/*
171. Excel Sheet Column Number
Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnTitle = "A"
Output: 1
Example 2:

Input: columnTitle = "AB"
Output: 28
Example 3:

Input: columnTitle = "ZY"
Output: 701
 

Constraints:

1 <= columnTitle.length <= 7
columnTitle consists only of uppercase English letters.
columnTitle is in the range ["A", "FXSHRXW"].
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int value = 0;
        for (int i = 0; i < columnTitle.length(); i++) {
            value = value * 26 + (columnTitle[i] - 'A' + 1);
        }
        return value;
    }
};

int main() {
    Solution solution;

    string test = "AB";
    cout << "Column Title: " << test << " -> Column Number: " << solution.titleToNumber(test) << endl;

    return 0;
}
