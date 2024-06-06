// see cell -13 for logic.

#include <iostream>
using namespace std;

int fib(int n){
    if(n==0 ){
        return 0;
    }

    if (n==1){
        return 1;
    } 
    
    return fib(n-1)+fib(n-2);
}

void print_till_n(int n){
    for (int i =0; i<=n ; i++){
        cout<<fib(i);
    }
}

int main(){
    int n;
    print_till_n(5);

}
