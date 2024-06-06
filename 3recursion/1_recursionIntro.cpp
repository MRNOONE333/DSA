// see cell 12 (call stack)

#include <iostream>
using namespace std;

int  factorial(int n){
//cout<<n<<endl;
// base condition.
if (n==0){
    return 1;
}
int smaller_output =  factorial(n-1);
return n* smaller_output ;
 }

int main(){
    int n;
    cout<<"give input:";
    cin>>n;
    int output = factorial(n);
    cout<<"Factorial:"<<output;
    return 0;
}

