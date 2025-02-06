Node* copyRandomList(Node* head) {
     Node * temp = head;
     map<Node*,Node*>mpp;
     while(temp != NULL)   
    {
        Node * newNode= new Node(temp->val);
        mpp[temp] = newNode;
        temp=temp->next;
    }
    temp =head;
    while(temp != NULL)
    {
        Node * copy = mpp[temp];
        copy->next = mpp[temp->next];
        copy->random = mpp[temp->random];
        temp=temp->next;
    }
    return mpp[head];
    }