/*
-------commented code gives segmentation error corrected code without error- 
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

 

void insert(Node * head, int i , int data){
    // new node
    Node * newNode = new Node(data); 
    //initilize count , temp
    int count=0;
    Node * temp = head;
    //while count <i-1 , go till i-1, example-> iff i  want to add at 3 position then go till 2.
    while (count!=i-1)
    {
        temp = temp->next;
        count++;
    }
    // update addresses.
    Node * a = temp->next;
    temp->next =newNode;
    newNode->next = a;
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

    Node* head = takeInputImprovedComplexity();
    print(head);
    int i, data;
    cout<< endl<<"give position to insert new node: ";
    cin>> i;
    cout<< endl<<"give at this position: ";
    cin>> data;
    insert(head, i,data);
    print(head);
}
*/


/*
this code gives problem when we add data at 1 position, or 0 index
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

 

void insert(Node * head, int i , int data){
    // new node
    Node * newNode = new Node(data); 
    //initilize count , temp
    int count=0;
    Node * temp = head;
    //while count <i-1 , go till i-1, example-> iff i  want to add at 3 position then go till 2.
    while  (temp!= NULL && count!=i-1)
    {
        temp = temp->next;
        count++;
    }
    // update addresses.
    if (temp!=NULL){
        Node * a = temp->next;
        temp->next =newNode;
        newNode->next = a;
    }
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

    Node* head = takeInputImprovedComplexity();
    print(head);
    int i, data;
    cout<< endl<<"give position to insert new node: ";
    cin>> i;
    cout<< endl<<"give at this position: ";
    cin>> data;
    insert(head, i,data);
    print(head);
}
 */


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

 

Node* insert(Node * head, int i , int data){
    // new node
    Node * newNode = new Node(data); 
    //initilize count , temp
    int count=0;
    Node * temp = head;

    //for position 1 , inedx 0
    if (i==0){
        newNode->next = head;
        head = newNode;
        return head;
        // bcz of this retun only, I have changed thee retun type in function from void insert to Node* insert
    }

    //while count <i-1 , go till i-1, example-> iff i  want to add at 3 position then go till 2.
    while  (temp!= NULL && count!=i-1)
    {
        temp = temp->next;
        count++;
    }
    // update addresses.
    if (temp!=NULL){
        Node * a = temp->next;
        temp->next =newNode;
        newNode->next = a;
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

    Node* head = takeInputImprovedComplexity();
    print(head);
    int i, data;
    cout<< endl<<"give position to insert new node: ";
    cin>> i;
    cout<< endl<<"give at this position: ";
    cin>> data;
    head =insert(head, i,data);
    print(head);
}
