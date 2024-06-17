#include <iostream>
using namespace std ;
#include "1_student.cpp"


int main(){
  Student s1;
  s1.display();

  Student s2;

  Student *s3 = new Student;
  s3 -> display();


//similarly set a constructor with 2 arguments instead of 1.
  Student s4(5);
  s4.display();

  Student *s5 = new Student(4);
  s5 -> display();

 Student s6(10,4);
 s6.display();

 cout<<endl<<"adress of s6 :"<<&s6;
}


// output-
// default created constructor called.
// age1745428515,rollNumber1974788464
// default created constructor called.
// default created constructor called.
// age8782016,rollNumber8788568
// parameterized constructor called.
// age6422224,rollNumber5
// parameterized constructor called.
// age8782016,rollNumber4
// constructor with  this key work and 2 parameters
// this:0x61fed8age4,rollNumber10

// adress of s6 :0x61fed8