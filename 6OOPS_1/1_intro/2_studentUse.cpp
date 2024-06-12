#include <iostream>
using namespace std ;
#include "1_student.cpp"


int main(){
    //statically

Student s1, s2, s3, s4, s5;

    s1.setAge(20);
    s1.rollNumber = 1;

    cout << "s1 roll no, age = " << s1.rollNumber << ", " << s1.getAge() << endl;

    // dynamic
    Student* s6 = new Student;
    (*s6).rollNumber = 20;
    (*s6).setAge(19);
    // same as-
    // s6->setAge(25);
    // s6->rollNumber = 6;
    cout << "s6 roll no, age = " << s6->rollNumber << ", " << s6->getAge() << endl;

    //delete s6; // Remember to delete dynamically allocated memory
}