/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 *Intersection of 2 LL
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> a, b;
        while(headA){
            a.push(headA);
            headA=headA->next;
        }
        while(headB){
            b.push(headB);
            headB=headB->next;
        }
        ListNode* val=NULL;
        while(!a.empty() and !b.empty()){
            if(a.top() == b.top()){
                val = a.top();
                a.pop();
                b.pop();
            }else{
                break;
            }
        }
        return val;
    }
};
