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
    Node* head = takeInputImprovedComplexity();
    print(head);
}

