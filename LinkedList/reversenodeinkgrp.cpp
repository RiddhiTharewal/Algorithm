/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* reverseList(ListNode* head, int k) 
    {
        ListNode* prev=NULL;
        ListNode* cur=head;
        ListNode* next;
        while (k--) 
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head->next=cur;
        return prev;
    }    
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len=0;
        ListNode* length=head;
        while(length!=NULL) 
        {
            len++;
            length=length->next;
        }
        ListNode* NewList=new ListNode();
        ListNode* temp=NewList;
        ListNode* cur=head;
        while (cur!=NULL) 
        {
            if (len>=k) 
            {
                temp->next=reverseList(cur, k);
                len-=k;
                temp=cur;
                cur=cur->next;
            } 
            else 
            {
                break;
            }
        }
        return NewList->next;
    }
};
