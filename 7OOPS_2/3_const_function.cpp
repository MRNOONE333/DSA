#include <iostream>
using namespace std ;

class MyClass {
public:
// Constant member function here after func names and argunrents.
    int getValue() const {  
        return value;
    }

    void setValue(int val) {
        value = val;
    }

private:
    int value;
};

int main() {
    MyClass obj;
    obj.setValue(5);
    cout << "Value: " << obj.getValue() ;
    return 0;
}
//In this getValue() is a constant member function 
// because it does not modify the state of the object.