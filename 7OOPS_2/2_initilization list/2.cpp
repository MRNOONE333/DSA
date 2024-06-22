// #include<iostream>
// using namespace std;

class Student{
    public:

    int age;
    const int rollno;


    //point 3
    // some reference variable
    int &x;

    // point -2
    // initilze const data membersa at te time of list
    Student(int r , int age ) : rollno(r) ,age(age) ,  x(this->age){
    }
    

    

};