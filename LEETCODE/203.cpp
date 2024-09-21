#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = new ListNode(0);
        temp->next = head;
        ListNode *curr = temp;
        while (curr->next != nullptr) {
            if (curr->next->val == val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return temp->next;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Helper function to create a linked list from an array
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 6, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createLinkedList(arr, n);

    cout << "Original list: ";
    printList(head);

    Solution sol;
    int valToRemove = 6;
    head = sol.removeElements(head, valToRemove);

    cout << "List after removing elements with value " << valToRemove << ": ";
    printList(head);

    return 0;
}
