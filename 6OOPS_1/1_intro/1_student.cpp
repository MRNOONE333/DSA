#include <iostream>
using namespace std ;
//class
class Student{
public:
int rollNumber;

private:
int age;


public:
void display(){
    cout<< "age" << age<< "," <<"rollNumber"<<rollNumber<<endl;
}

int  getAge() {
    return age;
}
int setAge(int a){
    age =a;
}
};