// Assignment Problem
// Problem Name: Pointers Output
// Problem Description:
// What will be the output ?
// float f = 10.5;
// float p = 2.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout << *ptr << “ “ << f << “ “ << p;
// Options:
// 0. 2.5 10.5 2.5
// 1. 2.5 11.5 2.5
// 2. 2.5 2.5 2.5
// 3. 11.5 11.5 2.5



// =====Answer=====
// Correct Option: 2

#include <iostream>
using namespace std;

int main() {
float f = 10.5;
float p = 2.5;
float* ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr <<"," << f <<","  << p;

}


// 2.5,2.5,2.5