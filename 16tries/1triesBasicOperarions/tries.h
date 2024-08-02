#include<iostream>
using namespace std;
#include"trieNode.h"

class trie {
    trieNode *root;
    public:
    trie() {
        root = new trieNode('\0');
    }

    void insert(trieNode* root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }
        // Small job
        int index = word[0] - 'a';
        trieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new trieNode(word[0]); // Created a node and put the value of the alphabet on that index of the array
            root->children[index] = child; // To make connection with that
        }
        // Recursive call
        insert(child, word.substr(1));
    }

    // For user without the root updating every time
    void insert(string word) {
        insert(root, word);
    }

    bool search(trieNode *parent, string word) {
        if (word.size() == 0)
            return parent->isTerminal;
        if (parent->children[word[0] - 'a'] != NULL)
            return search(parent->children[word[0] - 'a'], word.substr(1));
        else
            return false;
    }

    bool search(string word) {
        if (word.size() == 0)
            return false;
        return search(root, word);
    }

    void removeWord(trieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = false; // Main step for terminating the end
            return;
        }
        // Small job
        int index = word[0] - 'a';
        trieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return;
        }
        // Recursion
        removeWord(child, word.substr(1));

        // The terminal of the word has been removed, now delete the waste nodes
        if (child->isTerminal == false) {  // This checks if the child node is terminal false, starts from top
            for (int i = 0; i < 26; i++) {  // This runs through all the children of the child node
                if (child->children[i] != NULL) {
                    return;  // Don't delete if there are further children
                }
            }
            // If there are no further children then delete
            delete child;
            root->children[index] = NULL;
        }
    }

    void removeWord(string word) {
        removeWord(root, word);
    }
};
