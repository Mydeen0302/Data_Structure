#include<bits/stdc++.h>
using namespace std;
class  Node
{
public: int data;
Node*next;
Node* back;
public:
Node(int data1,Node* next,Node* back)
{
    data=data1;
    this->next=next;
    this->back=back;
}
Node(int data)
{
    this->data=data;
    this->back=nullptr;
    this->next=nullptr;
}
};
Node * converttodll(vector<int>arr)
{
    Node* head=new Node(arr[0]);
    Node * mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node * temp = new Node(arr[i],nullptr,mover);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void display(Node * head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
void reversedisplay(Node * head)
{
    Node * temp=head;
     while(temp->next != nullptr)
    {
        temp=temp->next;
    }
    while(temp != NULL)
    {
        cout<<temp->data;
        temp=temp->back;
    }
   
}
int main()
{
    vector<int>arr={1,2,3,4,5,6};
    Node * head= converttodll(arr);
    display(head);
    cout<<endl;
    reversedisplay(head);
    return 0;
}