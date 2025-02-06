
 
 #include<bits/stdc++.h>
 using namespace std;

 struct Node {
     int data;
     Node *next;
    Node() : data(0), next(nullptr) {}
     Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};

 
 /*
 bool isPalindrome(Node* head) {
    stack<int> mystack;
    Node* temp = head;

    // Push all elements of the list to the stack
    while (temp != nullptr) {
        mystack.push(temp->data);  // Assuming 'data' is the correct field in ListNode
        temp = temp->next;
    }

    temp = head;

    // Compare the elements while popping from the stack
    while (temp != nullptr) {
        if (temp->data != mystack.top()) {
            return false;  // Not a palindrome
        }
        mystack.pop();  // Pop the top element after comparison
        temp = temp->next;
    }

    return true;  // It's a palindrome
}
*/  
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
Node * reverse (Node * head)
{
    if(head->next == nullptr) return head;
    Node * newhead = reverse(head->next);
    Node * front = head->next;
    front->next =head;
    head->next=NULL;
    return newhead;
}
bool checkpalindrome(Node * head)
{
    Node * slow=head ;
    Node *fast=head;
while(fast->next != nullptr && fast ->next ->next != nullptr)
{
    slow=slow->next;
    fast = fast->next->next;
}
Node* newhead =reverse(slow->next);
Node * first = head;
Node * second = newhead;
while(second!=NULL) {
    if(first->data != second->data) { reverse(newhead) ;return false;}
    first=first->next;
    second=second->next;
}
 reverse(newhead);  
return true;

}
int main()
{
     vector<int>arr={1,2,3,2,1};
     Node* head=convertarrtoll(arr);
     cout<<checkpalindrome(head);
    return 0;
}