#include<iostream>
using namespace std;
#include "queueUsingLL.h"

int main(){
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  
    cout<<"front: "<<q.front()<<endl;
    
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    cout<<"front: "<<q.front()<<endl;

    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;

    return 0;
}
