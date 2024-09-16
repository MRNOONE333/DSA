#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Initialize pointers
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }
};

// Helper function
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original list: ";
    printList(head);

    // Reverse
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);

    cout << "Reversed list: ";
    printList(reversedHead);

    ListNode* temp;
    while (reversedHead != nullptr) {
        temp = reversedHead;
        reversedHead = reversedHead->next;
        delete temp;
    }

    return 0;
}
