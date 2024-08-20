#include<iostream>
using namespace std;

// brute force.
// this has 2^n complexity  to horrible.
// int fibo(int n){
//     //base case
//     if(n<=1)return n;
//     // small job 
//     int a=fibo(n-1);
//     int b=fibo(n-2);
//     return a+b;
// }



// recursive -  memoization.---- top down
// o(n) complexity-->>
int helperFib2(int n, int *ans){
    // base case
    if(n<=1)return n;
    // check if the some new values hasn't been added in array
    if(ans[n]!=-1)return ans[n];

    int a = helperFib2(n-1,ans);
    int b = helperFib2(n-2,ans);

    ans[n]= a+b; // save values in array.

    return ans[n];
}
// see working in notes cell 26.


int fib2(int n){
    int * ans = new int[n+1];
    // make all the valuses of the array as -1 to identify if it hasn't been traversed 
    //or some new values hasn't been added in array
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return helperFib2(n,ans);
}


// dynamic programming - iterative- bottom up approach.
int fib3(int n){
    int *ans = new int [n+1];
    ans[0]=0;
    ans[1]=1;
    for(int i=2;i<=n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}


int main(){
    int n;

    cout<<"input n : ";
    cin>>n;
    //cout<<fib2(n);


    cout<<fib3(n);


}
