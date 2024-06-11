#include <iostream>
using namespace std;

void removeX(char c1,char c2,char s[]){
    // base case
    if (s[0] =='\0')
    return ;
    // recursion
    if (s[0] == c1){
        s[0] = c2;
    }
    removeX(c1,c2,s+1);
}

    



int main(){
    char str[100];
    cout<<"input string:";
    cin>>str;

    char x,y;
    cout<<"give alphabets to be replaced with:";
    cin>> x>>y;
    removeX(x, y,str);
    cout<<"new string wothout X:"<<str;

    
}