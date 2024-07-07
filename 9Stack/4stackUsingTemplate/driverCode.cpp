#include <iostream>
using namespace std;
#include "stackMajorOperations.cpp"

int main(){
    stackUsingArray <char> s1(4);
    //stackUsingArray <int> s1(4);
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
    // Pair<int , double> p1;
    // p1.setX(10);
    // p1.setY(20.00);
    // cout<<"p1: "<< p1.getX() << " "<< p1.getY()<<endl;

    // // triplet class
    // Pair<int,int> p2;
    // p2.setX(10);
    // p2.setY(20);

    // Pair< Pair<int,int>,int> pi;
    // pi.setX(p2);
    // pi.setY(50);
    // // cout<<"pi: "<< p2.getX()<< " "<<p2.getY() << " "<< pi.getY();
    // //OR
    // cout<<"pi: "<< pi.getX().getX()<< " "<<pi.getX().getY() << " "<< pi.getY();
}
