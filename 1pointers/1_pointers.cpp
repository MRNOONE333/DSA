//  pointer Airthmetsics

// ------------------------------code1. 
// #include<iostream>
// using namespace std;

// int main(){
//     int i =10;
//     int*  p = &i;
//     cout<< p<< endl << *p;
    
// }

// output - 
// 0x61ff08
// 10

//  if i have to move p by one step


// ------------------------------code2.
// see readme cell 3 imge-1,

#include<iostream>
using namespace std;

int main(){
   int i =10;
    int*  p = &i;
    cout<< p<< endl << *p;
    p = p+1;
    cout << endl <<"after increment : "<< p <<endl << *p;
}
// INCREASED FROM 08- 0C , 4 values because of int

// 0x61ff08
// 10
// after increment : 0x61ff0c
// 6422284