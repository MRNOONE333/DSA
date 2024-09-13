#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> main;
    queue<int> tmp;
    MyStack() {}

    // Push
    void push(int x) {
        while (!main.empty()) {
            tmp.push(main.front());
            main.pop();
        }
        main.push(x);
        while (!tmp.empty()) {
            main.push(tmp.front());
            tmp.pop();
        }
    }

    // Remove
    int pop() {
        int res = main.front();
        main.pop();
        return res;
    }

    // Get the top element of the stack
    int top() {
        return main.front();
    }

    // Check if the stack is empty
    bool empty() {
        return main.empty();
    }
};

int main() {
    MyStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.top() << endl;

    cout << "Popped element: " << stack.pop() << endl;   
    cout << "Top element after pop: " << stack.top() << endl;

    cout << "stack empty=" << (stack.empty() ? "Yes" : "No") << endl;

    stack.pop();
    stack.pop();

    cout << "stack empty=" << (stack.empty() ? "Yes" : "No") << endl;  // Output: Yes

    return 0;
}
