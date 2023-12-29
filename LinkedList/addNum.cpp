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
    void insert(ListNode* &head, ListNode* &tail, int data){
        struct ListNode* temp = new ListNode(data);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next = temp;
            tail=temp;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* f = l1;
        struct ListNode* t = l2;
        struct ListNode *head = NULL;
        struct ListNode *tail=NULL;
        int c = 0, a = 0, sum =0;
        while(f!=NULL || t!=NULL || c!=0){
            a=0;
            int val1 = 0, val2=0;
            if(f!=NULL){
                val1=f->val;
            }
            if(t!=NULL){
                val2=t->val;
            }
            sum=c+val1+val2;
            c=sum/10;
            a=sum%10;
            insert(head,tail,a);
            if(f!=NULL)
                f=f->next;
            if(t!=NULL)
                t=t->next;
            
        }
        return head;
    }
};
