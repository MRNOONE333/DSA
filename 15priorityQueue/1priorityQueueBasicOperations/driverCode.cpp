#include<iostream>
using namespace std;
#include"priorityQueue.h"

int main(){
    priorityQueue p ;
    p.insert(100);
    p.insert(200);
    p.insert(300);
    p.insert(400);
    p.insert(500);
    p.insert(600);

    cout<< p.getSize()<<endl;
    cout<< p.getMin()<<endl;
    cout<< p.isEmpty()<<endl;
    
    while(!p.isEmpty()){
        cout<< p.remove()<<" ";
    }

}

//output
// 6
// 100
// 0
// 100 200 300 400 500 600