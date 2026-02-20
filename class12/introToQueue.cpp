#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;  // queue of integers

    q.push(10);    // queue: 10
    q.push(20);    // queue: 10, 20
    cout << q.front() << endl; // prints 10
    cout << q.back() << endl;  // prints 20
    q.pop();       // removes 10
    cout << q.size() << endl;  // prints 1
    cout << q.empty() << endl; // prints 0 (false)

    return 0;
}