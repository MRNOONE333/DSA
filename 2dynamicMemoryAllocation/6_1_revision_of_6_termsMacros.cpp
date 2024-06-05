// see celll 9 
// to overcome any updation error , mem.  usage , any more complexity usage.


// we mightwrite PI but compiler won't see it as PI rather the value we give
#include<iostream>
using namespace std;
#define PI 3.14
//preprocessor directive
//PI is not saved in memory; it's a constant literal that is directly used in the computation.
int main(){
    int r;
    cin >>  r;
    cout<< "area: "<< (PI *r*r)<<endl;


}