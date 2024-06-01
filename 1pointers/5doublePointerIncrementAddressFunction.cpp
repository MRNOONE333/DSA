#include <iostream>
using namespace std;

void incrementAddress(int** x) {
    (*x) += 1; // Increment the address stored in the pointer
    // or  
    // (**x) += 1;
}

int main() {
    int i = 10;
    int* p = &i;

    cout << "Address stored in p: " << p <<","<< *p<< endl;
    incrementAddress(&p); // Pass the address of the pointer to the function
    cout << "Address after increment: " << p << ","<< *p<< endl;
}

/*
In the function void incrementAddress(int** x), 
int** x receives the address of an int* (pointer to an integer). 
By dereferencing (*x), you access the value stored at the memory address pointed to by x, 
which happens to be an int*. Then, when you increment this value using (*x) += 1;, 
you're effectively incrementing the address stored in the pointer, not the content it points to.
*/


//    ...............   CRUX  -  HUI HUI HUI UHI HUI HUI HUI HUI HI UHIU ..............
// Inside the increment function, the value pointed to by *p (which is ptr) is incremented by 1.


// #include <iostream>
// using namespace std;

// void increment(int **p){
//   (**p)++;
// }

// int main() {

// int num = 10;
//  int *ptr = &num;
//  increment(&ptr);
//  cout << num << endl;


// }

// //output
// // 11


// #include <iostream>
// using namespace std;   

// void increment(int **p){
//   (*p)++;
// }

// int main() {

// int num = 10;
//  int *ptr = &num;
//  increment(&ptr);
//  cout << num << endl;


// }

// //output
// // 10