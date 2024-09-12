#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL)
            return true;

        ListNode* Temp = head;
        vector<int> Nodes;

        while (Temp != NULL) {
            Nodes.push_back(Temp->val);
            Temp = Temp->next;
        }

        int st = 0;
        int en = Nodes.size() - 1;

        while (st <= en) {
            if (Nodes[st++] != Nodes[en--])
                return false;
        }

        return true;
    }
};

// helper function 
ListNode* createLinkedList(const vector<int>& vals) {
    if (vals.empty()) return NULL;
    ListNode* head = new ListNode(vals[0]);
    ListNode* current = head;
    for (int i = 1; i < vals.size(); i++) {
        current->next = new ListNode(vals[i]);
        current = current->next;
    }
    return head;
}

int main() {
    vector<int> vals = {1, 2, 2, 1}; 
    ListNode* head = createLinkedList(vals);
    
    Solution sol;
    if (sol.isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    //delete linked list
    ListNode* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
