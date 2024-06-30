//Causes of Function Overloading:
//Function with pass by reference.

//there is no syntactical difference between the
// fun(int) and fun(int &).


#include <iostream>  
using namespace std;  
void fun(int x);  
void fun(int &x);   
 
void fun(int x)  
{  
std::cout << "Value of x is : " <<x<< std::endl;  
}  
void fun(int &b)  
{  
std::cout << "Value of b is : " <<b<< std::endl;  
}  




int main()  
{  
int a=10; 
// error, which f()?   
//fun(a); 
return 0;  
} 