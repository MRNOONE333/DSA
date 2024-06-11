#include <iostream>
using namespace std;

void removeX(char s[]){
    // base case
    if (s[0] =='\0')
    return ;
    // recursion 
    if (s[0]!='x')
    return removeX(s+1);
    else{
    int i=1;
    for (;  s[i]!='\0'; i++)
    {
        s[i-1]=s[i];
    }
    s[i-1]=s[i]; // for '\0'
    removeX(s);
}
    
}

int lengthRecursive(char s[]){
    // base case
    if (s[0]=='\0')
    return 0;
    // recursion
    int smallString = lengthRecursive(s+1); 
    /*    b y passing str + 1 to lengthRecursive,- effectively 
    passing the string without its first character, creating a substring.*/
    return 1+smallString ;
}

int main(){
    char str[100];
    cout<<"input string:";
    cin>>str;
    int l = lengthRecursive(str);
    cout<<"String length :"<<l<<endl; 
    removeX(str);
    cout<<"new string wothout X:"<<str<<" , length:"<<lengthRecursive(str);

    
}