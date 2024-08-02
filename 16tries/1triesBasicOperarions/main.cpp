#include<iostream>
using namespace std;
#include"trieNode.h"
#include"tries.h"

int main() {
    trie t;
    t.insert("abc");
    t.insert("xyz");
    t.insert("lmn");

    cout << t.search("abc") << endl; // 1

    t.removeWord("abc");
    cout << t.search("abc") << endl; // 0

    return 0;
}
