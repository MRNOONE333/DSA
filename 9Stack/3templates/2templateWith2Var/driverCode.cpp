#include <iostream>
using namespace std;
#include "template.cpp"

int main(){
    Pair<int , double> p1;
    p1.setX(10);
    p1.setY(20.00);
    cout<<"p1: "<< p1.getX() << " "<< p1.getY()<<endl;

    // triplet class
    Pair<int,int> p2;
    p2.setX(10);
    p2.setY(20);

    Pair< Pair<int,int>,int> pi;
    pi.setX(p2);
    pi.setY(50);
    // cout<<"pi: "<< p2.getX()<< " "<<p2.getY() << " "<< pi.getY();
    //OR
    cout<<"pi: "<< pi.getX().getX()<< " "<<pi.getX().getY() << " "<< pi.getY();
}
