#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;   // stack of integers

    s.push(10);     // stack: 10
    s.push(20);     // stack: 10, 20
    cout << s.top() << endl; // prints 20
    s.pop();        // removes 20
    cout << s.size() << endl; // prints 1
    cout << s.empty() << endl; // prints 0 (false)

    return 0;
}