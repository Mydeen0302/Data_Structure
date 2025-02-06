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

Node* convertarrtoll(vector<int>arr)
{
Node*head=new Node(arr[0]);
Node*mover =head;
for(auto it:arr)
{   if(it != head->data)
{Node*temp =new Node(it);
    mover->next=temp;
    mover=mover->next;
    }
    
}
return head;
}
void displayll(Node* head)
{    if(head==NULL) return;
    Node* temp=head;
    while(temp !=nullptr)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
bool searchll(Node * head,int k)
{if(head==NULL) return head;
     Node* temp=head;
    while(temp !=nullptr)
    {
        if(temp->data == k) return true;
        temp=temp->next;
    }
    return false;
}
Node *removehead(Node * head)
{  if(head==NULL) return head;
    Node * temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* removetail(Node * head)
{
Node * temp = head;
while(temp->next->next !=nullptr)
{
temp=temp->next;
}
free(temp->next);
temp->next=nullptr;
return head;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
 //   Node* head=new Node(arr[0]);
  //  cout<<head->data<<endl;
    //cout<<head;
    Node* head=convertarrtoll(arr);
    //displayll(head);
    //cout<<searchll(head,8);
    Node* head2= removehead(head);
   // displayll(head2);
    Node* head3=removetail(head2);
    displayll(head3);
    return 0;
}