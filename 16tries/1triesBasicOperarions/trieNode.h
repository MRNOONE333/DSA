#pragma once
class trieNode {
    public:
    char data;
    trieNode **children;
    bool isTerminal;

    trieNode(char data) {
        this->data = data;
        children = new trieNode*[26];
        // To avoid garbage value, initialize with null.
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
        isTerminal = false;
    }
};
