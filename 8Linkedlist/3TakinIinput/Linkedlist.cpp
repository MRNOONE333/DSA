#include <iostream>
using namespace std;
#include "Node.cpp"

Node* takeInput(){
    cout<< "input data: ";
    int data ;
    cin >> data;

    Node * head= NULL;
    while (data!= -1)
    {
        Node *newNode = new Node (data);
        // for first node.
        if (head == NULL)
        {
            head = newNode;
        }
        // after 1st node
        else{
            Node* temp = head;
            // traverse all the way till last node 
            while (temp->next!=NULL)
            {
                temp = temp->next;
            }
            // after traversing , connect n-1 next to n; example ->4.next== 5 node address.
            temp->next = newNode;
        }
        cin>> data;
    }
    return head;
}

void print(Node *head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<","<<temp->next<<" ";
        temp= temp->next;
    }

    // temp =head;
    // while(temp!= NULL){
    //     cout<<temp->data<<" ";
    //     temp= temp->next;
    // }
} 

int main(){

    // see image 4
    Node* head = takeInput();
    print(head);
}

