#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;

    cout << "Back element: " << q.back() << endl;

    q.pop();

    cout << "Front element after pop: " << q.front() << endl;

    cout << "Size : " << q.size() << endl;

    if (q.empty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}
