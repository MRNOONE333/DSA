#include <iostream>
using namespace std;
#include <climits> 

int minSteps(int n){
    //base case 
    if(n<=1)return 0;

    //resursive
    int x = minSteps(n-1);

    int y=INT_MAX, z=INT_MAX;

    if(n%2==0)y=minSteps(n/2); 
    if(n%3==0)z=minSteps(n/3); 

    int ans = min(x,min(y,z))+1;
    return ans;
}

int main(){
    int n;
    cout<<"inout no: "<<endl;
    cin>>n;
    cout<<minSteps(n);
}