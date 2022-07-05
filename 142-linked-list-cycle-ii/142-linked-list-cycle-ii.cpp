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
        ListNode *slow;
        
        ListNode *entry = head;
        slow = head;
        fast = head;
        while(fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow==fast) {
                while(entry and slow) {
                    if (entry == slow) return entry;
                    entry = entry->next;
                    slow = slow->next;
                }
            }
        }
        
        return NULL;
    }
};