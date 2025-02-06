#include <iostream>
using namespace std;

class Queue {
private:
    int start = -1, end = -1;
    int queue[10], currsize = 0, size = 10;

public:
    void push(int x) {
        if (currsize == size) {
            cout << "Queue is full" << endl;
        } else {
            if (currsize == 0) {
                start = 0;
                end = 0;
            } else {
                end = (end + 1) % size;
            }
            queue[end] = x;
            currsize++;
        }
    }

    void pop() {
        if (currsize == 0) {
            cout << "Queue is empty" << endl;
        } else {
            if (currsize == 1) {
                start = -1;
                end = -1;
            } else {
                start = (start + 1) % size;
            }
            currsize--;
        }
    }

    int top() {
        if (currsize == 0) {
            cout << "Queue is empty" << endl;
            return -1;  // Return a sentinel value to indicate empty
        }
        return queue[start];  // Return the front element
    }

    int sizeQueue() {
        return currsize;  // Renamed to avoid conflict with the size member
    }

    bool isEmpty() {
        return currsize == 0;  // Function to check if the queue is empty
    }
};

int main() {
    Queue q;
    int num;
    char choice;

    while (true) {
        cout << "\nQueue Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Is Empty\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':  // Push
                cout << "Enter number to push: ";
                cin >> num;
                q.push(num);
                cout << num << " pushed onto the queue." << endl;
                break;

            case '2':  // Pop
                q.pop();
                break;

            case '3':  // Top
                num = q.top();
                if (num != -1)  // Check if top is not empty
                    cout << "Front element is: " << num << endl;
                break;

            case '4':  // Check if empty
                if (q.isEmpty())
                    cout << "Queue is empty." << endl;
                else
                    cout << "Queue is not empty." << endl;
                break;

            case '5':  // Exit
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Try again." << endl;
                break;
        }
    }
    return 0;
}
