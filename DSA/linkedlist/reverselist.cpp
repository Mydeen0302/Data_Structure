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
Node * reverselistII(Node * head)
{
    Node* temp=head;
    Node * prev=NULL;
    while (temp != NULL )
    {
        Node * front =temp ->next;
        temp->next=prev;
        prev=temp;
        temp=front;
        /* code */
    }return prev;

}
void reverselist(Node * head)
{
    Node *mover = head;
    stack<int>mystack;
    while(mover!=nullptr)
    {
          mystack.push(mover->data);
          mover=mover->next; 
    }
    Node * temp=head;
    while(temp != nullptr&& !mystack.empty())
    {
        temp->data=mystack.top();
        mystack.pop();
        temp=temp->next;
    }
  

}
Node * reverselistrecursive(Node * head)
{
    if(head==NULL || head->next==nullptr)return head;
    Node * newhead= reverselistrecursive(head->next);
    Node * front = head->next;
    front->next =head;
    head->next=NULL;
    return newhead;
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
int main()
{
    vector<int>arr={1,2,3,4,5};
     Node * head=   convertarrtoll(arr);

       return 0;
}