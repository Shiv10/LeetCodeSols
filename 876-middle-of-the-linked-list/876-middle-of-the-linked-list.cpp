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
    ListNode* middleNode(ListNode* head) {
        int c = 0;
        ListNode *curr;
        curr = head;
        while(curr) {
            c++;
            curr=curr->next;
        }
        
        int n = c/2;
        c = 0;
        curr = head;
        while(true) {
            if (c==n) {
                return curr;
            }
            c++;
            curr = curr->next;
        }
    }
};