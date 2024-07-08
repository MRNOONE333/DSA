#include <iostream>
using namespace std;
#include "stackUsingLL.cpp"

int main(){
    //Stack <char> s1;
    Stack <int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout<< "top: "<<s1.top()<<endl;

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<s1.getSize()<<endl;

    cout<< s1.isEmpty()<<endl;
}
