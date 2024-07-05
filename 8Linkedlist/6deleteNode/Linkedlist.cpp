//TODO- add logic to delee last node as well
#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInputImprovedComplexity(){
    cout<< "input data: ";
    int data ;
    cin >> data;

    Node * head= NULL;
    Node * tail =NULL;
    while (data!= -1)
    {
        Node *newNode = new Node (data);
        // for first node.
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        // after 1st node
        else{
            tail->next = newNode;
            tail = tail->next;
            //or , tail = newnode;
        }
        cin>> data;
    }
    return head;
}

 

Node* Delete(Node * head, int i){
    if (head == NULL) {
        // If the list is empty, just return the head
        return head;
    }
    
    // Special case: Deleting the first node (index 0)
    if (i == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Initialize count and temp
    int count = 0;
    Node* temp = head;

    // Traverse the list to find the node before the one to be deleted
    while (temp != NULL && count != i - 1) {
        temp = temp->next;
        count++;
    }

    // If the position is valid and temp is not NULL ;, we are not at the end of the list
    if (temp != NULL && temp->next != NULL) {
        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    return head;
}


void print(Node *head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<","<<temp->next<<" ";
        temp= temp->next;
    }
} 

int main(){

    Node* head = takeInputImprovedComplexity();
    print(head);
    int i, data;
    cout<< endl<<"give INDEX to delete  node: ";
    cin>> i;
    head =Delete(head, i);
    print(head);
}
