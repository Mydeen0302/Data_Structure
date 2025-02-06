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
}
Node *del(Node * head,int k)
{  if(head == NULL )return head;
    if(k==1)
    {
       Node* temp=head;
       head=head->next;
       delete(temp);
       return head;
        }
     int cnt=0;
    Node * temp=head;
    Node *prev =NULL;
   while(temp != NULL)
   {
    cnt++;
    if(cnt == k)
    {  prev->next=prev->next->next;
        delete(temp);
        return head;
        break;
    }
    prev=temp;
    temp=temp->next;
   }

    
}
Node * inbegin(Node * head,int k)
{ Node * temp=new Node(k);
    if(head==NULL){return temp;}

    temp->next=head;
    head=temp;
    return head;
}
Node * inend(Node * head,int k)
{
    Node * temp=new Node(k);
    if(head==NULL){ return temp;}
    if(head->next == nullptr){head->next=temp; return head;}
    Node * mover =head;
    while( mover->next !=NULL)
    {
        mover=mover->next;
    }
    mover->next=temp;
    return head;
}
Node * iindex(Node * head,int ele,int k)
{   Node * temp=new Node(ele);
    if(head==NULL){return head;}
    if(k==1){
         temp->next=head;
    head=temp;
    return head;
    }
    else{
        int cnt=1;
        Node * mover = head;
        while(cnt != k-1 && mover != NULL)
        {   cnt++;
                mover=mover->next;
        }
        temp->next=mover->next;
        mover->next =temp;
        return head;
    }
    
}Node* middle(Node* head) {
    Node* temp = head;
    Node* mover = head;
    int cnt = 0;
    
    // Count the number of nodes
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    
    // Move mover to the middle node
    int i = 0;
    while (i < cnt / 2) {  
        mover = mover->next;
        i++;
    }

    return mover;
}
Node * middle2(Node * head)
{
    Node * hare =head;
    Node * tortoise=head;
    while(hare!=NULL && hare->next!=nullptr)
    {
        hare=hare->next->next;
        tortoise=tortoise->next;
    }
    return tortoise;
}
int main()
{ vector<int>arr={1,2,3,4,5,6};
Node* head=convertarrtoll(arr);
//display(head);
//Node*  head1=  del(head,1);
//display(head1);
//Node * head1= inbegin(head,0);
//Node * head1= inend(head,11);
//Node * head1=iindex(head,89,6);
//Node * head1 = middle(head);
Node * head1 = middle2(head);
display(head1);
    return 0;
}