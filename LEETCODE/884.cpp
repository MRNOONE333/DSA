#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

vector<string> uncommonFromSentences(string A, string B) {
    unordered_map<string, int> count;
    istringstream iss(A + " " + B);
    string word;
    while (iss >> word) count[word]++;
    
    vector<string> res;
    for (auto w : count) {
        if (w.second == 1)
            res.push_back(w.first);
    }
    
    return res;
}

int main() {
    string A = "apple banana apple";
    string B = "banana orange";
    
    vector<string> result = uncommonFromSentences(A, B);
    
    cout << "Uncommon word: ";
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
