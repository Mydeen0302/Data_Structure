
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

void display(Node* head) {
    Node* mover = head;
    while (mover != nullptr) {
        cout << mover->data << " ";
        mover = mover->next;
    }
    cout << endl;
}/*

Node * findintersection(Node * head1,Node* head2)
{  if(head1==NULL|| head2 ==NULL ){return NULL;}
    unordered_map<Node*,int>map;
Node * temp =head1;

while(temp!= NULL)
{ 
    map[temp]++;
temp=temp->next;
}
temp=head2;
while(temp!=NULL)
{
    if(map[temp] >1) return temp;
    else map[temp]++;
}
return NULL;
}
*/
Node * findintersection(Node * head1,Node* head2)
{ 
    Node* d1 = head1;
    Node* d2 = head2;
    
    while(d1 != d2) {
        d1 = d1 == NULL? head2:d1->next;
        d2 = d2 == NULL? head1:d2->next;
    }
    
    return d1;
}
int main() {
    vector<int> arr1 = {1,2,3,4,5};
    Node* head1 =  convertarrtoll(arr1);
    vector<int> arr2 = {1,2,3,4,5};
      Node* head2 =  convertarrtoll(arr2);
      Node*ans =findintersection(head1,head2);
    cout<<ans->data;  
    return 0;
}