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
        int c = 0;
        ListNode *temp = head;
        while(temp) {
            c++;
            temp = temp->next;
        }
        if (c==1 && n ==1) {
            return nullptr;
        }
        n = c-n;
        if (n == 0) {
            head = head->next;
            return head;
        }
        ListNode *prev = nullptr;
        
        temp = head;
        c = 0;
        while(temp) {
            if (n-1==c){
                temp->next = temp->next->next;
                return head;
            }
            c++;
            temp = temp->next;
        }
        return head;
    }
};