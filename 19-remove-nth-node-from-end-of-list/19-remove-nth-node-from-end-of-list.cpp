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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int c = 0;
        while(curr) {
            c++;
            curr=curr->next;
        }
        
        c = c-n;
        int k = 0;
        curr = head;
        ListNode* prev = NULL;
        while(curr) {
            if(k==c) {
                if (curr==head) {
                    head = curr->next;
                } else {
                    prev->next = curr->next;
                }
                break;
            }
            prev = curr;
            curr=curr->next;
            k++;
        }
        return head;
    }
};