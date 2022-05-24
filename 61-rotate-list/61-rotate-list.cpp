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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *prev;
        ListNode *curr;
        curr = head;
        vector<int> v;
        while(curr) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        head = NULL;
        curr = NULL;
        int n = v.size();
        vector<int> t(n);
        int i;
        for(i=0;i<n;i++) {
            t[(i+k)%n] = v[i];
        }
        
        for(auto x: t) {
            ListNode* temp = new ListNode(x);
            if(!head) {
                head = temp;
                curr = head;
                continue;
            }
            
            curr->next = temp;
            curr = temp;
        }
        return head;
        
    }
};