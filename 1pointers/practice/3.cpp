//Assume memory address of variable ‘a’ is : 200 and a double variable is of size 8 bytes, what will be the output -
// double a = 10.54;
// double *d = &a;
// d = d + 1;
// cout  << d << endl;

#include <iostream>
using namespace std;

int main() {


double a = 10.54;
double *d = &a;
d = d + 1;
cout  << d << endl;

}

//output
//0x61ff08

// theoretically 
// 208