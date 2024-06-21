//commentd == shallow copy, rest deep copy.
#include <iostream>
using namespace std;
#include "2.cpp"

int main(){
    char name[]="ggne";
    Student s1(9,name);
    cout<< "s1-";
    s1.display();

    name[3]='f';
    Student s2(7,name);
    cout<<endl<<"s2";
    s2.display();
    cout<<endl;
    cout<< "s1_again-";
    s1.display();

    cout<<endl<<endl<<endl;
     cout<<"copy const";
    Student s3(20 , name);
    Student s4(s3);
    //s4.name[0]='x';  // This wont work - Even thought Copy constructors are also shallow by nature
    // but we have defined -- const and pass by reference for that only so it don't change- Student(Student const &s)
    s3.display();
    s4.display();
}



//  s1-ggne,9
// s2ggnf,7
// s1_again-ggnf,9
// s1 also gets changes though we only changes s2 , shallow copy.
// notes see cell 16
