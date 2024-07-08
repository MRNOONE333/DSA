#include<iostream>
using namespace std;

// class Node{
//     public:
//     int data;
//     Node * next;

//     Node(int data){
//         this->data=data;
//         next==NULL;
//     }
// };

// class Stack{
//     Node * head ;

//     public:
//     Stack(){

//     }

//     int getSize(){

//     }
//     bool isEmpty(){

//     }
//     void Push(int element){

//     }
//     int pop(){

//     }
//     int top(){

//     }
// };

// Using templates
template <typename T>
class Node{
    public:
    T data;
    Node <T> * next;

    Node(T data){
        this->data=data;
        next==NULL;
    }
};

template <typename T>
class Stack{
    Node<T> * head ;
    int size; // no of element in stack.

    public:
    Stack(){
        head = NULL;
        size = 0;
    }

    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void push(T element){
        Node <T> *newNode = new Node <T> (element);
        newNode->next=head;
        head = newNode;
        size++;
    }
    T pop(){
        if(isEmpty()){
            return 0;
        }
        T  ans = head->data;
        Node <T> *temp =head;
        head=head->next;
        delete temp;
        size --;
        return ans;
    }
    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }

    
};
