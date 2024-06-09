#include <iostream>
#include <string>

using namespace std;

bool checkPalindromehelper(string s , int start, int end){
    if (s[start]!=s[end])
    return false;
    
    if(start>=end)
    return true;

    return checkPalindromehelper(s,start+1,end-1);
}

bool checkPalindrome(const string& s ){
    int length = s.length();
    return checkPalindromehelper(s,0,length-1);
}


int main() {
 cout<<"input string";
  string input;
  cin >>input;

  cout<<boolalpha;

  cout<<"the above "<<input<<" is palindrome:"<<checkPalindrome(input);

  return 0;
}
