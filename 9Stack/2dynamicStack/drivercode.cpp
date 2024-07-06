#include <iostream>
using namespace std;
#include"stackMajorOperations.cpp";

int main(){
    stackUsingArray s1(4);
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout<< "top: "<<s1.top()<<endl;

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<s1.size()<<endl;

    cout<< s1.isEmpty()<<endl;
}

// output
//top: 50
// 50
// 40
// 30
// 2
// 0