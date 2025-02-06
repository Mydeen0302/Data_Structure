
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
/*Node * sort(Node * head)
{   if(head==NULL || head->next==nullptr) return head;
    Node * temp =head;
    int cnt1=0,cnt2=0,cnt0=0;
    while(temp != NULL)
    {
        if(temp->data == 1){cnt1++;}
        else if(temp->data == 2){cnt2++}
        else{cnt0++;}
        temp=temp->next;
    }
   Node * temp =head
    while(cnt0 >0)
    { temp->data =0;
    temp=temp->next;
    }
    while(cnt1>0)
    {
        temp->data=1;
        temp=temp->next;
    }
    while(cnt3>0)
    {
        temp->data=2;
        temp=temp-next;
    }
    return head;
    
}
*/
Node * sort(Node * head)
{   if(head==NULL || head->next==nullptr) return head;
    Node * temp =head;
    Node * zero = new Node(-1);
    Node * zerohead= zero;
    Node * one = new Node(-1);
    Node * onehead= one;
    Node * two = new Node(-1);
    Node * twohead= two;
    while(temp != NULL)
    {    if(temp->data == 1){one->next = temp;
    one=temp;}
        else if(temp->data == 2){two->next = temp;two=temp;}
        else{zero->next = temp;zero=temp;}
        temp=temp->next;
    }
    zero->next = (onehead->next)?onehead->next:twohead->next;
    one->next = twohead->next;
    two->next =NULL;
    return zerohead->next;
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