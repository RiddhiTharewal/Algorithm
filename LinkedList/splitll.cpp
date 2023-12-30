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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 0;
        ListNode*  current = head;
        vector<ListNode*> ans;
        while(current){
            current = current->next;
            count++;
        }
       
        int q = count/k;
        int r = count%k;
        current = head;
        for(int i = 0; i<k; i++){
            ListNode* sublist;
            int sublistsize = i<r?q+1:q;
            if(sublistsize==0)
                sublist = NULL;
            else{
                sublist=current;
                for(int j = 0; j<sublistsize-1; j++){
                    if(current)
                        current = current->next;
                }

            }
            ListNode* next = NULL;
            if(current){
                next = current->next;
                current->next = NULL;
            }
            ans.push_back(sublist);
            current = next;
        }
        return ans;
    }
};
