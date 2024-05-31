// see readme cell 4.

#include<iostream>
using namespace std;

int a [5];


void  size(int a[] ){
    cout<< "arrray adredd when treated as pointer"<< sizeof(a) <<endl; 
}
// this don't follows in  characters.
int  main (){
    a[0]=1;
    a[1]=2;
     
    cout<< "a: " <<a<< endl<< "&a[0] and &a[4] :"<<&a[0] << "," << &a[4];
    cout << endl << *(a+1);
    // another way to access. 
    cout<<endl << 0[a];

    cout<< endl<<"size of a as array.: " << sizeof(a); // this gives the size of array but gives adress of a[0].

}

// output-
// a: 0x61fefc
// &a[0] and &a[4] :0x61fefc,0x61ff0c
// 2

// it means  and a[0]  means same - and its adress.



