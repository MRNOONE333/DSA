// readme cell-5 .
// syntax in pointers is is written in a particular way because then it will read the address in thta way only , the starting or most significant bit.


#include<iostream>
using namespace  std;
 int main(){
    int i = 65;
    char c = i;

    cout << c <<endl;

    // ERROR -  typecasting.
   //  int * p = &i;
   //  char *pc = p;  // erorr here

   //implicit typecasting
   int z = i+c;   // yaha bataya nai bass kardiya.

    // explicit typecasting.
    int * p = &i;
    char *pc = (char*)p;  // explicit - (char*).



    cout << p <<endl<< *p<<endl  ;
    
    cout<<"pc : "<< pc<<endl<< *pc<<endl;
    cout<<"address of char -"<<(void*)pc;

    cout<<"z:" << z<<",  sizeof z" <<sizeof(z);
    // in cpp char-1 and int -4 bytes.

 }
