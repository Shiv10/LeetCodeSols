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
    ListNode* reverse(ListNode* head) {
        ListNode *curr;
        ListNode *next;
        ListNode *prev;
        
        curr = head;
        prev = NULL;
        while(curr) {
            next = curr->next;
            curr->next= prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        int c = 0;
        ListNode* tempHead;
        ListNode *temp;
        ListNode *next;
        ListNode *curr = head;
        ListNode *prev = NULL;
        while(curr) {
            if (c==0) {
                tempHead = curr;
            }
            
            if(c==k-1) {
                next = curr->next;
                curr->next = NULL;
                temp = reverse(tempHead);
                if (prev) prev->next = temp;
                else head=temp;
                tempHead->next = next;
                prev = tempHead;
                c=0;
                curr=next;
                continue;
            }
            curr=curr->next;
            c++;
        }
        return head;
    }
};