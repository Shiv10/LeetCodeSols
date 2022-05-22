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
    bool isPalindrome(ListNode* head) {
        ListNode *curr = head;
        vector<int> v;
        while(curr) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        
        int n = v.size();
        int k = n-1;
        for(int i = 0; i<=n/2; i++) {
            if(v[k--]!=v[i]) return false;
        }
        
        return true;
    }
};