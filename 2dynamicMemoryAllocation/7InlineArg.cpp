// see cell -11

// When the inline function is called whole code of the inline 
// function gets inserted or substituted at the point of the inline function call.

// The compiler may not perform inlining in such circumstances as: 

// If a function contains a loop. (for, while and do-while) 
// If a function contains static variables. 
// If a function is recursive. 
// If a function return type is other than void, and the return statement doesn’t exist in a function body. 
// If a function contains a switch or goto statement. 

#include <iostream>
using namespace std;

int max(int a , int b){
    int c = (a>b)?a:b;
    return c;
}


int main(){
cout << max(4,9);
}

