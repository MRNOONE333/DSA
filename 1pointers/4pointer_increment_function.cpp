
#include<iostream>
using namespace std;

void increment(int* x ){
    x+=1;

}
int main(){
    int i =10;
    int* p = &i;
    cout<< *p<< endl;
    cout<<p<<endl;
    increment(p);
    cout<<p<<endl;
    cout<<  *p;

}

// see dynamic mem. allocation 2refeernce var.code.

/*
In the increment function, the pointer x is passed by value. The x pointer is a local copy of the pointer p from the main function. 
When you perform x += 1; in the increment function, you're actually incrementing the copy of the pointer x locally within the function, 
not the original pointer p from the main function.

To increment the value the pointer points to, you need to dereference the pointer and then increment the value it points to:

void increment(int** x) {
    (*x) += 1; // Dereference the pointer and increment the value it points to
}

*/
