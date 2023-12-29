class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* total = head;
        int count = 0;
        while(total!=NULL){
            count++;
            total=total->next;
        }
        if(count<n && n<=1){
            return NULL;
        }
        count=count-n;
        if(count==0){
            return head->next;
        }
       
        total=head;
        while(count>1){
            total=total->next;
            count--;
        }
        total->next=total->next->next;
        return head;
    }
};
