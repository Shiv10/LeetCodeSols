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
        if (!head) return NULL;
        Node *l1 = head;
        Node *l2;
        
        while(l1) {
            l2 = new Node(l1->val);
            l2->next = l1->random;
            l1->random = l2;
            l1 = l1->next;
        }
        
        l1 = head;
        
        while(l1) {
            l2 = l1->random;
            l2->random = l2->next?l2->next->random:NULL;
            l1 = l1->next;
        }
        
        l1 = head;
        Node *head2 = l1->random;
        while (l1) {
            l2 = l1->random;
            l1->random = l2->next;
            l2->next = l1->next?l1->next->random:NULL;
            l1 = l1->next;
        }
        return head2;
    }
};