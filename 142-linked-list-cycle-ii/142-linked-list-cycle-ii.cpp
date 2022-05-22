/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast;
        ListNode* slow;
        slow = head;
        fast = head;
        ListNode *entry = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                while(entry && slow) {
                    if (entry==slow){
                        return entry;
                    }
                    slow = slow->next;
                    entry = entry->next;
                }
            }
        }
        return NULL;
    }
};