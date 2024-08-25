#include <iostream>
#include <climits>
using namespace std;

int numSquare(int n){
    int *arr= new int [n+1];

    if(n<=0)return 0 ;
    arr[0] = 0;

    for (int i=0;i<=n;i++){
        // recursion and small job
        int minsquare = INT_MAX;
        for (int j = 1; j*j <= i ; j++){
            minsquare = min(minsquare , numSquare(i-j*j)+1);
        }
        arr[i] =minsquare;
    }
    int result = arr[n];
    delete[] arr;
    return result;
}

int main(){
    int n;
    cout<<"enter no.  ";
    cin>>n;
    cout<<numSquare(n);
}