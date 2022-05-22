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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int c1 = 0, c2 = 0;
        ListNode* temp1;
        ListNode* temp2;
        temp1 = headA;
        temp2 = headB;
        while(temp1) {
            c1++;
            temp1 = temp1->next;
        }
        
        while(temp2) {
            c2++;
            temp2 = temp2->next;
        }
        
        temp1 = headA;
        temp2 = headB;
        if (c1>c2) {
            int diff = c1-c2;
            while(diff>0) {
                temp1 = temp1->next;
                diff--;
            }
        } else {
            int diff = c2-c1;
            while(diff>0) {
                temp2 = temp2->next;
                diff--;
            }
            
        }
        
        while(temp1 && temp2) {
            if (temp1 == temp2) {
                return temp1;
            }
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return nullptr;
    }
};