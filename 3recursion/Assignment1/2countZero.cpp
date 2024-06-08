#include <iostream>
using namespace std;

int countZero(int n){
    // base
    if(n==0)
    return 0;

    // recursive
    if (n%10 == 0)
    return 1+countZero(n/10);
    else  return countZero(n/10);
}

int main(){
 
    cout<<countZero(50050);
}