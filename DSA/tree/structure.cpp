#include<bits/stdc++.h>
using namespace  std;
class Node{
public:
int data;
Node *left;
Node *right;

Node(int data)
{
    this->data =  data;
    this->left =NULL;
    this->right =NULL;
}

};
class DFS{
public:
void inorder(Node *root)
{
     if(root == NULL) return ;
     inorder(root->left);
     cout<< root->data;
     inorder(root->right);
}
void preorder(Node *root)
{
     if(root == NULL) return ;
       cout<< root->data;
     preorder(root->left);
     preorder(root->right);
}
void postorder(Node *root)
{
     if(root == NULL) return ;
     postorder(root->left);
     postorder(root->right);
     cout<< root->data;
}
void preorderiterative(Node *root)
{
    stack<Node*>mystack;
    mystack.push(root);
    while(true)
    {
     
            if(mystack.empty()) break;
            Node* temp=mystack.top();
            mystack.pop();
            cout<<temp->data;
            if(temp->right != NULL) mystack.push(temp->right);
            if(temp->left != NULL )mystack.push(temp->left);
         
    }
}
void inorderiterative(Node * root)
{
    stack<Node*> mystack;
    Node* node = root;

    while(true)
    {
        if(node != NULL)
        {
            mystack.push(node);
            node=node->left;
        }
        else{
            if(mystack.empty() ) break;
            Node* temp = mystack.top();
            mystack.pop();
            cout<<temp->data;
            node = temp->right;
        }
    }
}
void postorderiterative(Node* root)
{
    stack<Node*>mystack;
    stack<int>mystackint;
    mystack.push(root);
    while(!mystack.empty())
    {  
        Node* temp = mystack.top();
        mystack.pop();
        mystackint.push(temp->data);
        if(temp->left!= NULL) mystack.push(temp->left);
        if(temp->right != NULL ) mystack.push(temp->right);    
    }
    while(!mystackint.empty())
    {
        cout<<mystackint.top();
        mystackint.pop();
    }
}
};
int maximumheightrees(Node * root)
{
if(root == NULL) return 0;
int lh=maximumheightrees(root->left);
int rh= maximumheightrees(root->right);
return 1+max(lh,rh);
}
class BFS{
    public:
    vector<vector<int>> levelordertraversal(Node *root)
    {    vector<vector<int>>ans;
      if(root == NULL ) return ans;
         queue<Node*> q;
         q.push(root);
         while(!q.empty())
         {
            int  n = q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
             { 
                  Node *temp = q.front();
                 q.pop();
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
                level.push_back(temp->data);
            }
            ans.push_back(level);
         }  
         return ans;
        }
    };
int main()
{
    Node *root = new Node(5); 
    root->left=new Node(4);
    root->right=new Node(3);
    root->left->left=new Node(2);
    root->left->right=new Node(1);
    root->right->left=new Node(0);
    root->right->right=new Node(-1);
    DFS traversal;
    cout<<"In Order recursive approach:";
    traversal.inorder(root);
    cout<<endl;
    cout<<"Pre Order recursive approach:";
    traversal.preorder(root);
    cout<<endl;
    cout<<"Post Order recursive approach:";
    traversal.postorder(root);
    BFS traversal2 ; 
    vector<vector<int>>ans = traversal2.levelordertraversal(root);
     cout << "Level Order Traversal: " << endl;
    for (const auto &level : ans) {
        for (int val : level) {
            cout<<"    ";
            cout << val << " ";
        }
        cout << endl;
    }
    cout<<"In Order  Itreavtive approach:";
    traversal.inorderiterative(root);


    
    cout<<endl;
    cout<<"Pre Order  Itreavtive approach:";
    traversal.preorderiterative(root);
    cout<<endl;
    cout<<"Post Order  Itreavtive approach:";
    traversal.postorderiterative(root);
    return 0;
}