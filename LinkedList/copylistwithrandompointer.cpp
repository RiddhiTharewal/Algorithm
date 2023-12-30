/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> nodeMap;
        Node* currnode = head;
        Node* dummy = new Node(0);
        Node* current = dummy;
        while(currnode){
            Node* copiedNode = new Node(currnode->val);
            nodeMap[currnode] = copiedNode;
            current->next = copiedNode;
            currnode = currnode->next;
            current = current->next;
        }
        currnode = head;
        current = dummy->next;
        while(currnode){
            if(currnode->random){
                current->random = nodeMap[currnode->random];
            }
            currnode = currnode->next;
            current = current->next;
        }
        return dummy->next;
    }
};
