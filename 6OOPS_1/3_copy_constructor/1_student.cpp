#include <iostream>
using namespace std ;
//class
class Student{
public:
int rollNumber;

private:
int age;

public:

Student(int r,int a){
    age=a;
    rollNumber=r  ;
}


void display(){
    cout<< "age" << age<< "," <<"rollNumber"<<rollNumber<<endl;
}
~Student(){
    cout<<"destructor called"<<endl;
}

};