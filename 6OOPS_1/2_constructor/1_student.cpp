#include <iostream>
using namespace std ;
//class
class Student{
public:
int rollNumber;

private:
int age;

public:

// default Constructor.
Student(){
    cout<< "default created constructor called."<<endl;
}

//similarly set a constructor with 2 arguments
Student(int r){
    cout<<"parameterized constructor called."<<endl;
    rollNumber =r;
}


Student(int r,int a){
    cout<< "constructor with  this key work and 2 parameters "<<endl;
    cout<<"this:"<<this;
     age=a;
     rollNumber=r  ;
}


void display(){
    cout<< "age" << age<< "," <<"rollNumber"<<rollNumber<<endl;
}

};