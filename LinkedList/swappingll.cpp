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
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 0;
        ListNode* c = head;
        while(c){
            count++;
            c = c->next;
        }
        ListNode* first = head;
        ListNode* last = head;
        int s = k-1, end = count-k;
        while(s--){
            first = first->next;
        }
        while(end--){
            last = last->next;
        }
        int a = first->val;
        first->val = last->val;
        last->val = a;
        return head;
    }
};
