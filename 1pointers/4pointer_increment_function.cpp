
#include<iostream>
using namespace std;

void increment(int* x ){
    x+=1;

}
int main(){
    int i =10;
    int* p = &i;
    cout<< *p<< endl;
    cout<<p<<endl;
    increment(p);
    cout<<p<<endl;
    cout<<  *p;

}

// see dynamic mem. allocation 2refeernce var.code.


