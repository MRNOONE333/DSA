#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Solution {
public:
    int scoreOfString(string s) {
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            count += abs(s[i] - s[i + 1]);
        }
        return count;
    }
};

int main() {
    Solution sol;
    string inputString;
    
    cout << "Enter a string: ";
    cin >> inputString;

    int score = sol.scoreOfString(inputString);
    
    cout<< score << endl;

    return 0;
}
