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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        int psum = 0;
        map<int, ListNode*> nodemap;
        ListNode* current = dummy;
        dummy->next = head;
        while(current){
            psum+=current->val;
            if(nodemap.count(psum)){
                current = nodemap[psum]->next;
                int sum = psum+current->val;
                while(sum!=psum){
                    nodemap.erase(sum);
                    current = current->next;
                    sum += current->val;
                }
                nodemap[psum]->next = current->next;
            }else{
                nodemap[psum] = current;
            }
            current = current->next;
        }
        return dummy->next;

    }
};
