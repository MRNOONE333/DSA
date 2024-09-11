#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> st;
        string cur = "";
        for(auto it : s) {
            if(it == ' ') {
                st.push_back(cur);
                cur = "";
                continue;
            }
            cur += it;
        }
        st.push_back(cur); // Push the last word

        if(st.size() != p.size()) return false;

        map<char, string> mp;
        map<string, char> check;

        for(int i = 0; i < p.size(); i++) {
            if(!mp.count(p[i])) {
                mp[p[i]] = st[i];
                if(check.count(st[i])) return false;
                check[st[i]] = p[i];
            } else {
                if(mp[p[i]] != st[i]) return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string pattern = "abba";
    string s = "dog cat cat dog";

    if(solution.wordPattern(pattern, s)) {
        cout << "The string follows the pattern." ;
    } else {
        cout << "The string does not follow the pattern.";
    }

    return 0;
}
