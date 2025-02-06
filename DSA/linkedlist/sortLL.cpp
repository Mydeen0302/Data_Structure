
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
int data;
Node* next;
public:
Node(int data1,Node*next1)
{
data=data1;
next = next1;
}
Node(int data1)
{
    data=data1;
    next=nullptr;
}
  
};

Node* convertarrtoll(vector<int> arr)
{
    if (arr.empty()) {
        return nullptr; // Handle empty vector case
    }

    Node* head = new Node(arr[0]); // Create head with the first element
    Node* mover = head;

    for (size_t i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]); // Create a new node for each element
        mover->next = temp;
        mover = mover->next;
    }

    return head; // Return the head of the linked list
}

/*
Node * sort(Node * head)
{  if(head== NULL || head->next == NULL  )return head;
    vector<int>arr;
    Node * temp =head;
    while(temp != NULL )
    {
        arr.push_back(temp->data);
        temp=temp->next;
    }
    sort(arr.begin(),arr.end());
    temp=head;
    int i=0;
    while(temp != NULL )
    {  
        temp->data= arr[i++]; 
        temp=temp->next;
    }
    return head;
}*/
Node* findMedian(Node* head) {
    if (head == nullptr || head->next == nullptr) return head;

    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

Node* merge(Node* left, Node* right) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while (left != nullptr && right != nullptr) {
        if (left->data < right->data) {
            temp->next = left;
            left = left->next;
        } else {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    if (left != nullptr) temp->next = left;
    if (right != nullptr) temp->next = right;

    return dummy->next;
}

Node* sort(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* median = findMedian(head);
    Node* left = head;
    Node* right = median->next;
    median->next = nullptr;

    left = sort(left);
    right = sort(right);

    return merge(left, right);
}

void display(Node* head) {
    Node* mover = head;
    while (mover != nullptr) {
        cout << mover->data << " ";
        mover = mover->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {5, 4, 3, 1, 2};
    Node* head =  convertarrtoll(arr);

    Node* sortedHead = sort(head);
    display(sortedHead);

    return 0;
}