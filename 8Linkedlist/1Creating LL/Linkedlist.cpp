#include <iostream>
using namespace std;
#include "Node.cpp"

int main(){
    //statically
    Node n1(5);
    Node * head = &n1;

    Node n2(6);
    // NOTES- see cell 19 image 1.

    n1.next = &n2; //connected.
    // see cell 19 image 2

    cout<< "n1,n2:"<< n1.data<<","<< n2.data<<endl;
    cout<< "address n1,n2:"<< &n1<<","<< &n2<<endl;
    cout<< "head->data:"<<head->data;

    cout<<endl<<"dynamically"<<endl;
    //dynamically
    Node *n3 = new Node(10);
    Node *head3 = n3;
    Node *n4 = new Node(20);
    // see cell 19 image 3.
    // (*n3).next = n4;
    n3->next=n4;
    cout<<"n3,n4:"<<n3->data<<","<<n4->data<<" ; address n3"<< n3->next;
}

// output
// n1,n2:5,6
// address n1,n2:0x61fee8,0x61fee0
// head->data:5
// dynamically
// n3,n4:10,20 ; address n30x871b98