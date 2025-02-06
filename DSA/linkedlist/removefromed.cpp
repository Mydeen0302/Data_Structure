 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp =head;
       int cnt=0;
        while(temp != NULL )
        {  cnt++;
            temp=temp->next;
        }
    int pos= 0;
    ListNode * ele=head;
   if(cnt== n) {temp = head; head=head->next; delete temp;  
            return head;}
   while(pos< cnt-n-1){pos++; ele=ele->next;}
   temp = ele->next;
        ele->next = ele->next->next; 
        delete temp; 
        return head;
    
    }
