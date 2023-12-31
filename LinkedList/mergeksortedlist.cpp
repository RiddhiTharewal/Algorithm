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
    ListNode* mergelist(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        while(l1 && l2){
            if(l1->val < l2->val){
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
        tail->next = l1 ? l1 : l2;
        return dummy->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        int n = lists.size();
        while(n>1){
            int m = (n+1)/2;
            for(int i = 0; i<n/2; i++){
                lists[i] = mergelist(lists[i], lists[i+m]);
            }
            n = m;
        }
        return lists[0];
    }
};
