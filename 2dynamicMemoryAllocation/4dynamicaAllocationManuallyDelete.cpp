// see cell7 of notes.
#include <iostream>
using namespace  std;
#include <typeinfo>

int main(){
    // int *p = new int;
    // cout<<*p;
    // delete p;

    int *p = new int [5];

    cout<<*p<<"p:"<<p<<endl;
    *p = 5;
    cout<<*p<<","<<"p:"<<p<<endl;
    for (int i = 0;i<5;i++){
        p+=1;
    }
    cout<<"type:"<<typeid(p).name()<<",  "<< typeid(*p).name()<<endl;
    cout<<endl<<"p[1,2,3,4]:"<<p[0]<<", "<<p[1]<<endl;
    cout<<*p<<","<<"p:"<<p<<endl;
    delete []p;
    cout<<*p;

    // address isn't deleted in any of them, the value is deleted .
}

// 16717592p:0xff1848
// 16717592


// #include <iostream>
// using namespace std;

// int main() {
//     int *p = new int[5]{1, 2, 3, 4, 5};  // Allocate an array of size 5 and initialize with values
//     cout << "*p: " << *p << ", p: " << p << endl;

//     delete[] p;  // Deallocate the dynamically allocated array

//     // The following line will result in undefined behavior
//     // because you are dereferencing a pointer that has been deleted.
//     cout << "*p: " << *p << endl;

//     return 0;
// }

// *p: 1, p: 0x1051848
// *p: 17110912
