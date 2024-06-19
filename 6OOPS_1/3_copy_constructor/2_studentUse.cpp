#include <iostream>
using namespace std;
#include "1_student.cpp"

int main(){
    // copy contructor
    Student s1(10,10);
    Student s2(s1);
    cout<<"s2";
    s2.display();

    // copy assignment. and destructors
    Student s3(30,30);
    Student s4(40,40);
    Student *s5 = new Student(50,50);
    cout<<endl<<"copy assignment"<<endl;
    s4 =s3;
    *s5 = s3;
    cout<<"s4, s5:";
    s4.display();
    (*s5).display();

    // for s5 destructor won't be called until s5 is not deleted. bcz its dynamic
    
    //This is because dynamic memory allocation persists until 
    //explicitly deallocated, unlike automatic or static memory 
    //allocation where memory is automatically released when it 
    //goes out of scope.
    delete s5;                  
}


