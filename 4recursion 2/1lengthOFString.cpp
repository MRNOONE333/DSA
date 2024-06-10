#include <iostream>
using namespace std;
int lengthRecursive(char str[]){
    // base case
    if (str[0]=='\0')
    return 0;
    // recursion
    int smallString = lengthRecursive(str+1); 
    /*By passing str + 1 to lengthRecursive,- effectively 
    passing the string without its first character, creating a substring.*/
    return 1+smallString ;
}

int main(){
    char str[100];
    cout<<"input string:";
    cin>>str;
    int l = lengthRecursive(str);
    cout<<"String length :"<<l; 
    
}