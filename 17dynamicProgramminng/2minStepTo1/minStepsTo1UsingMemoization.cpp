#include <iostream>
using namespace std;
#include <climits> 

int minStepHelper(int n ,int *ans){
    //base
    if(n<=1)return 0;

    // checkk if arr values not changed , output already exist
    if(ans[n]!=-1)return ans[n];

    // calculate output
    int x =  minStepHelper(n-1,ans);
        
    int y=INT_MAX, z=INT_MAX;
    if(n%2==0)y=minStepHelper(n/2,ans); 
    if(n%3==0)z=minStepHelper(n/3,ans); 

    int output = min(x,min(y,z))+1;
    ans[n] = output;
    return output;
}

int minSteps2(int n){
    int *ans = new int[n+1];

    for (int i = 0; i <= n; i++)
    {
        ans[i]=-1;
    }
    return minStepHelper(n ,ans);
}


int main(){
    int n;
    cout<<"input no: "<<endl;
    cin>>n;
    cout<<minSteps2(n);
}