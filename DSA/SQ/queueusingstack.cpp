#include <bits/stdc++.h>
using namespace std;

class Queue {
    stack<int> myqueue;
    stack<int> temp;

public:
    // Push element into the queue
    void push(int x) {
       myqueue.push(x);
    }

    // Pop the front element from the queue
    void pop() {
      if(!temp.empty())
      temp.pop();
      else 
      {
        while(!myqueue.empty())
        {
            temp.push(myqueue.top());
            myqueue.pop();
        }
      }
    }

    // Get the front element of the queue
    int top() {
         if(!temp.empty())
        return temp.top();
      else 
      {
        while(!myqueue.empty())
        {
            temp.push(myqueue.top());
            myqueue.pop();
        }
        return temp.top();
      }

    }

    // Check if the queue is empty
    bool empty() {
        return myqueue.empty()&&temp.empty();
    }
};

int main() {
    Queue q;

    // Pushing elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Accessing the front element
    cout << "Front element: " << q.top() << endl;  // Output should be 10

    // Popping the front element
    q.pop();
    cout << "Front element after pop: " << q.top() << endl;  // Output should be 20

    // Popping again
    q.pop();
    cout << "Front element after another pop: " << q.top() << endl;  // Output should be 30

    // Popping last element
    q.pop();

    // Checking if the queue is empty
    if (q.empty()) {
        cout << "Queue is empty now\n";
    }

    return 0;
}
