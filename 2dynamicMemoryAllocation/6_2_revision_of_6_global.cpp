// global var.
// don't use much, isn't a good practice.
// pass by reference or something else , as global var may cause problem  it can be chaged by anyone at  anytime.
#include <iostream>
using namespace std;

int a; //global var.

void g() {
    a++;
    cout << a << endl;
}

void f() {
    cout << a << endl;
    a++;
    g();
}

int main() {
    a = 10;
    f();

    cout << a << endl;
    return 0;
}