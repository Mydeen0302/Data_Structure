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
void display(Node *head)
{
Node * mover =head;
while(mover != NULL)
{
    cout<< mover->data;
    mover=mover->next;
}
}
bool detect(Node* head)
{
    unordered_map<Node*, int> map;
    Node* temp = head;
    
    while (temp != NULL)
    {
        // Check if the current node (temp) is already in the map
        if (map.find(temp) != map.end())
        {
            return true;  // Cycle detected
        }
        map[temp]++;  // Mark the node as visited
        temp = temp->next;
    }
    return false;  // No cycle detected
}

int main()
{
    vector<int>arr={1,2,3,4,5,5};
     Node * head=   convertarrtoll(arr);
    cout<<detect(head);
    
    return 0;
}