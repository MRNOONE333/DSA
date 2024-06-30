//Causes of Function Overloading:
//Function with Default Arguments

//error-

#include<iostream>  
using namespace std;  
void fun(int);  
void fun(int,int );  
//
void fun(int i)  
{  
    std::cout << "Value of i is : " <<i<< std::endl;  
}  
//
void fun(int a,int b=9)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl;  
}  

//
int main()  
{  
    // error here 
    //fun(12);  

    //no error
   fun (1,2);
   
    return 0;  
}  
