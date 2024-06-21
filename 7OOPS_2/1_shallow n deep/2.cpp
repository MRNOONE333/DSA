//commented == shallow copy, rest deep copy.
#include <iostream>
using namespace std;
#include <cstring>
class Student{
    int age;
    char *name;
    public:
    //  By using  this->age, 
    // I am ensuring that you're accessing the member
    //  variable rather than the local variable or parameter.
    Student(int age ,char *name){
        this->age=age;
        //shallow copy.
        //this->name=name;

        //deep copy. cell- 17
        this -> name = new char[strlen(name)+1];
        strcpy (this->name ,name);
    }
    // cell -18
    // copy constr with reference and constannt value bcz of which 
    // we cant chnage the values usong the refeernce we can only read them. 
    Student(Student const &s){
    this ->age = s.age;
    this -> name = new char[strlen(name)+1];
    strcpy (this->name ,s.name);
   };
 
    void display(){
        cout<< name<<","<<age;
    }
};
