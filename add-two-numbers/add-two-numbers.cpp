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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l1rev;
        l1rev = l1;
        ListNode* l2rev;
        l2rev = l2;
        int carry = 0, sum;
        ListNode* head = nullptr;
        ListNode* curr;
        while(l1rev && l2rev){
            sum = l1rev->val + l2rev->val + carry;
            if (sum>9) {
                carry = 1;
                sum = sum%10; 
            } else {
                carry = 0;
            }
            
            if (!head) {
                head = new ListNode(sum);
                curr = head;
            } else {
                curr->next = new ListNode(sum);
                curr = curr->next;
            }
            l1rev = l1rev->next;
            l2rev = l2rev->next;
        }
        
        while (l1rev) {
            sum = l1rev->val + carry;
            if (sum>9) {
                carry = 1;
                sum = sum%10;
            } else {
                carry = 0;
            }
            
            if (!head) {
                head = new ListNode(sum);
                curr = head;
            } else {
                curr->next = new ListNode(sum);
                curr = curr->next;
            }
            l1rev = l1rev->next;
        }
        
        while (l2rev) {
            sum = l2rev->val + carry;
            if (sum>9) {
                carry = 1;
                sum = sum%10;
            } else {
                carry = 0;
            }
            
            if (!head) {
                head = new ListNode(sum);
                curr = head;
            } else {
                curr->next = new ListNode(sum);
                curr = curr->next;
            }
            l2rev = l2rev->next;
        }
        
        if (carry != 0) {
            curr->next = new ListNode(carry);
            curr = curr->next;
        }
        
        return head;
    }
};