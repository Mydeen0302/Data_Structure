/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>map;
        ListNode * temp=head;
        while(temp != NULL)
        {   if(map[temp] == 2){return temp;}
            map[temp]++;
            temp = temp->next;
        }
        return NULL;
    }
};*/