//Causes of Function Overloading:
// Type Conversion.

// answer 1 - - 
//The compiler prefers an exact match over type conversion. 
//Since 1.2 is a double literal, it matches the newly added double version of fun.

// question 1 - this gives error-

// #include<iostream>  
// using namespace std;  
// void fun(int);  
// void fun(float);  
// void fun(int i)  
// {  
//     std::cout << "Value of i is : " <<i<< std::endl;  
// }  
// void fun(float j)  
// {  
//     std::cout << "Value of j is : " <<j<< std::endl;  
// }  
// int main()  
// {  
//     fun(12);  

//     fun(1.2);  
//     return 0;  
// } 



// but this don't why??
// question 1 part continued.

#include<iostream>  
using namespace std;  
void fun(int);  
void fun(float);  
void fun(int i)  
{  
    std::cout << "Value of i is : " <<i<< std::endl;  
}  
void fun(double j)  
{  
    std::cout << "Value of j is : " <<j<< std::endl;  
}  
int main()  
{  
    fun(12);  
    fun(1.2);  
    return 0;  
} 




// explicitly stating 1.2 as float in the first code


// #include<iostream>  
// using namespace std;  
// void fun(int);  
// void fun(float);  
// void fun(int i)  
// {  
//     std::cout << "Value of i is : " <<i<< std::endl;  
// }  
// void fun(float j)  
// {  
//     std::cout << "Value of j is : " <<j<< std::endl;  
// }  
// int main()  
// {  
//     fun(12);  
//     float x =1.2;
//     fun(x);  
//     return 0;  
// } 