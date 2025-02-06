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
Node * inserthead(Node* head,int k)
{   Node * temp=new Node(k);
     Node *prev=head;
    if(head == NULL){return temp;}
       temp->next=prev;
       prev->back = temp;
       head=temp; 
       return head;
}
Node * inserttail(Node* head,int k)
{   Node * temp=new Node(k);
     Node *prev=head;
    if(head == NULL){return temp;}
        while(prev->next != nullptr)
        {
                prev=prev->next;
        }
        prev->next=temp;
        temp->back=prev;
        return head;
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
Node * insertpos(Node * head,int pos,int ele)
{
    Node * temp=new Node(ele);
    Node * prev=head;
    int cnt=0;
    while(cnt < pos)
    {
        cnt++;
        prev=prev->next;
    }
    temp->back=prev;
    temp->next=prev->next;
    prev->next=temp;
    prev->next->back=temp;
    return head;
}
   Node * deletehead(Node * head)
    {
        if(head==NULL){
            return nullptr;
        }
        if(head->next== nullptr) {delete head ;return nullptr;} 
        Node * temp = head;
            head=head->next;
            head->back=nullptr;
            delete temp;
            return head;
    }
    Node * deletetail(Node *head)
    {
         if(head==NULL){
            return nullptr;
        }
        if(head->next== nullptr) {delete head ;return nullptr;} 
        Node * temp =head;
        while( temp->next != nullptr)
        {
            temp=temp->next;
    }
        Node * prev= temp->back;
        prev->next=nullptr;
        free(temp);
        return head;
    }
    Node * deletepos(Node *head,int k)
    {
        if(head==NULL){
        return head;
        }
        if(k==1)
        {
           Node * temp = head;
            head=head->next;
            head->back=nullptr;
            delete temp;
            return head;  
        }
        Node *temp = head;
        int cnt=0;
        while(cnt < k-1 && temp !=NULL )
        {
            cnt ++;
            temp=temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
        // k is greater than the number of nodes in the list
        return head;
    }

        Node * d =temp->next;
        temp->next = d->next;
        if(d->next !=NULL)
        d->next->back=temp;
        delete(d);
        return head;
    }
    int main()
    {
        vector<int>arr={1,2,3,4,5,6};
        Node * head= converttodll(arr);
    // Node * newhead =inserthead(head,6);
    //Node * newhead  =inserttail(head,7);
    //Node * newhead=insertpos(head,3,9);
   //Node * newhead = deletehead(head);
   // Node * newhead=deletetail(head);
    Node * newhead = deletepos(head,4);
    display(newhead);
    
        return 0;
    }