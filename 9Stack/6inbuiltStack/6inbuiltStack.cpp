#include<stack>
#include <iostream>
using namespace std;

// see cell cell 21 for format ;doubt here  see vid.


// int main(){
//     stackUsingArray s1(4);
//     s1.push(10);
//     s1.push(20);
//     s1.push(30);
//     s1.push(40);
//     s1.push(50);

//     cout<< "top: "<<s1.top()<<endl;

//     cout<<s1.pop()<<endl;
//     cout<<s1.pop()<<endl;
//     cout<<s1.pop()<<endl;

//     cout<<s1.size()<<endl;

//     cout<< s1.isEmpty()<<endl;
// }

int main(){
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout<< "top: "<<s1.top()<<endl;

    cout<<s1.size()<<endl;

    cout<< s1.empty()<<endl;

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

    cout<<s1.size()<<endl;

    cout<< s1.empty()<<endl;


}

// output-
// top: 50
// 5
// 0
// 0
// 1