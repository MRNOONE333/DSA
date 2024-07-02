#include <iostream>
using namespace std;
#include "Node.cpp"


// void print(Node *head){
//     while(head!= NULL){
//         cout<<head->data<<" ";
//         head= head->next;
//     }
// }


// good practice don't use head to traverse rather make an temp var.
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
    Node n1(1);
    Node * head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    
    // Not necessary
    n5.next=NULL;

    // see image 4
    print(head);
}

