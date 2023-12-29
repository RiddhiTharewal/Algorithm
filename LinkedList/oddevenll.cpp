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
    ListNode* oddEvenList(ListNode* head) {
        if(!head){
            return head;
        }
        vector<int> e,o;
        ListNode* n = head;
        while(n && n->next){
            e.push_back(n->next->val);
            o.push_back(n->val);
            n = n->next->next;
    
        }
        if(n){
            o.push_back(n->val);
        }
        ListNode* ans = head;
        int Oind = o.size();
        int i = 0, j = 0;
        while(ans){
            if(i == Oind){
                ans->val = e[j];
                j++;
            }
            else{
                ans->val = o[i];
                i++;
            }
            ans = ans->next;
        }
        return head;
    }
};
