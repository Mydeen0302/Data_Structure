#include<bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> mystack;
    
public:
    // Push an element into the stack
    void push(int x) {
        int s = mystack.size();
        mystack.push(x);
        for (int i = 0; i < s; i++) {
            mystack.push(mystack.front());
            mystack.pop();
        }
    }

    // Pop the top element from the stack
    void pop() {
        if (!mystack.empty()) {
            mystack.pop();
        } else {
            cout << "Stack is empty\n";
        }
    }

    // Get the top element of the stack
    int top() {
        if (!mystack.empty()) {
            return mystack.front();
        } else {
            cout << "Stack is empty\n";
            return -1;  // Return -1 if the stack is empty
        }
    }

    // Check if the stack is empty
    bool empty() {
        return mystack.empty();
    }
};

int main() {
    Stack s;

    // Pushing elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Accessing the top element
    cout << "Top element: " << s.top() << endl;  // Output should be 30

    // Popping the top element
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;  // Output should be 20

    // Popping again
    s.pop();
    cout << "Top element after another pop: " << s.top() << endl;  // Output should be 10

    // Popping last element
    s.pop();

    // Checking if stack is empty
    if (s.empty()) {
        cout << "Stack is empty now\n";
    }

    // Attempting to pop from an empty stack
    s.pop();  // Should print "Stack is empty"

    return 0;
}
