#include <iostream>
#include <climits>
using namespace std;

int numSquarehelper(int n,int *arr){
    // base case
    if(n<=0)return 0 ;
    if(arr[n]!=-1)return arr[n];

    // recursion and small job
    int minsquare = INT_MAX;
    for (int i = 1; i*i <= n ; i++)
    {
        minsquare = min(minsquare , numSquarehelper(n-(i*i) ,arr)+1);
    }
    arr[n] =minsquare;
    // delete arr;
    return arr[n];
}

int numSquare(int n){
    int *arr= new int [n];
    for (int i=0;i<=n;i++){
        arr[i] = -1;
    }
    int result =numSquarehelper(n,arr);
    delete[] arr;
    return result;
}

int main(){
    int n;
    cout<<"enter no.  ";
    cin>>n;
    cout<<numSquare(n);
}