#include <iostream>
using namespace std;
#include<cmath>

int BalancedBinaryTree(int h){

    int mod = pow(10,9)+7;
    //base
    if(h<=1)return 1;

    long long x = BalancedBinaryTree(h-1);
    long long y = BalancedBinaryTree(h-2);

    long long temp1 = (x * x) % mod;
    long long temp2 = (2 * x * y) % mod;
    long long ans = (temp1 + temp2) % mod;


    // int ans = x*x+2*x*y;
    return ans;
}

int main(){
    int h;
    cout<<"enter height: ";
    cin>>h;
    cout<<BalancedBinaryTree(h);
}