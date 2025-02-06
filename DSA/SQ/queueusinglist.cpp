#include<bits/stdc++.h>
using namespace std;


struct queuenode {
    int data;
    queuenode *next;
    queuenode(int d) {
        data = d;
        next = NULL;
    }
};

struct Queue {
    queuenode *start = NULL;
    queuenode *end = NULL;
    int size = 0;

    void push(int x) {
        queuenode *node = new queuenode(x);
        if (start == NULL && end == NULL) {
            start = node;
            end = node;
        } else {
            end->next = node;
            end = node;
        }
        size++;
    }

    void pop() {
        if (start == NULL && end == NULL) {
            cout << "Queue is empty" << endl;
        } else {
            if (start == end) {
                delete start; // Use delete instead of free
                start = NULL;
                end = NULL;
            } else {
                queuenode *temp = start;
                start = start->next;
                delete temp; // Use delete instead of free
            }
            size--;
        }
    }

    int top() {
        if (start == NULL) {
            cout << "Queue is empty" << endl;
            return -1; // Return a sentinel value if queue is empty
        }
        return start->data;
    }

    void printQueue() {
        queuenode *temp = start;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q; // Create a queue object

    // Push elements onto the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Print the queue
    cout << "Queue elements: ";
    q.printQueue();

    // Get the front element
    cout << "Front element: " << q.top() << endl;

    // Pop elements from the queue
    q.pop();
    cout << "After popping, queue elements: ";
    q.printQueue();

    // Get the new front element
    cout << "New front element: " << q.top() << endl;

    // Pop remaining elements
    q.pop();
    q.pop();

    // Try popping from an empty queue
    q.pop();

    return 0;
}
