#include<iostream>
using namespace std;
  
int main(){
    int a[] = {1,2,3}; // display adress
  // "xx": This is a string literal consisting of two characters 'x' and 'x'
   char b [] ="xx";  // display content.
   cout<< a << endl<< b << endl; 

   char* c = &b[0];
   cout <<c << endl; // display content.

   int* d = &a[0];
   cout << d; // display adress

 cout<<endl<< "(void*) &b-" <<(void*) &b;
 char* z = reinterpret_cast<char*> (&b);
 cout<<endl<<"z-"<<z;
 
}


// 0x61fef8
// xx
// xx
// 0x61fef8
// (void*) &b-0x61fef5
// z-xx