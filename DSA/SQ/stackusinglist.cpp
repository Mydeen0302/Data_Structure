#include <bits/stdc++.h>
using namespace std;

struct stacknode {
    int data;
    stacknode *next;
    stacknode(int d) {
        data = d;
        next = NULL;
    }
};

struct Stack { // Renamed struct to Stack
    stacknode *topNode; // Renamed top to topNode
    int size;

    Stack() { // Constructor
        topNode = NULL;
        size = 0;
    }

    void push(int x) {
        stacknode *node = new stacknode(x);
        node->next = topNode;
        topNode = node;
        size++;
    }

    int top() { // Function to get the top element
        if (topNode != NULL) return topNode->data;
        else {
            cout << "Stack is empty" << endl;
            return -1; // Return a sentinel value if stack is empty
        }
    }

    void pop() {
        if (topNode != NULL) {
            stacknode *temp = topNode;
            topNode = topNode->next;
            delete temp; // Use delete instead of free
            size--;
        } else {
            cout << "Stack is empty" << endl;
        }
    }

    void printStack() { // Renamed to follow camelCase
        stacknode *temp = topNode;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main() {
    Stack s; // Create a stack object

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Print the stack
    cout << "Stack elements:" << endl;
    s.printStack();

    // Get the top element
    cout << "Top element: " << s.top() << endl;

    // Pop elements from the stack
    s.pop();
    cout << "After popping, stack elements:" << endl;
    s.printStack();

    // Get the new top element
    cout << "New top element: " << s.top() << endl;

    // Pop remaining elements
    s.pop();
    s.pop();

    // Try popping from an empty stack
    s.pop();

    return 0;
}
