#include<bits/stdc++.h>
using namespace std;
class Node 
{
public:
int data;
Node* next;
public:
Node(int data1)
{
data=data1;
next=nullptr;
}
Node(int data1,Node *next1)
{
    data=data1;
    next=next1;
}
};

void display(Node * head)
{
    Node *temp=head;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}

Node* convertarrtoll(vector<int>arr)
{if (arr.empty()) return nullptr;
Node* head= new Node(arr[0]);
Node *mover=head;
for(int i=1;i<arr.size();i++)
{
  Node * temp = new Node(arr[i]);
  mover->next=temp;
  mover=mover->next;
}
return head;
}/*
void segregate(Node * head)
{
    Node * odd= head->next;
    Node * even =head;
    vector<int>arr;
    while(odd != NULL)
    {
        arr.push_back(odd->data);
        if(odd->next != NULL)odd= odd->next->next;
        else odd=NULL;
    }
     while(even != NULL && even->next !=NULL)
    {
        arr.push_back(even->data);
          if(even->next != NULL) even = even->next->next;
          else even =NULL;
    }
    Node * temp =head;

    int i=0;
    while(temp != NULL)
    {
        temp->data = arr[i++];
        
        temp=temp->next;
    }
}
*/

void segregate(Node *head) {
    if (head == NULL || head->next == NULL) return; // Handle edge cases with 0 or 1 node
    
    Node *odd = head;
    Node *even = head->next;
    Node *evenhead = even;

    while (even != NULL && even->next != NULL) {
        odd->next = odd->next->next;  // Link odd nodes together
        odd = odd->next;          // Move to the next odd node

        even->next = odd->next;   // Link even nodes together
        even = even->next;        // Move to the next even node
    }
    
    // Attach the even list to the end of the odd list
    odd->next = evenhead;
}

int main()
{ vector<int>arr={1,2,3,4,5,6};
Node* head=convertarrtoll(arr);
segregate(head);
display(head);
    return 0;
}