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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL||head->next==NULL)
            return head;
        
        ListNode* head1=head,*head2=head->next;
        ListNode* curr=head2->next;
        
        ListNode* curr1=head1,*curr2=head2;
        
        while(curr)
        {
            curr1->next=curr;
            curr2->next=curr->next;
            
            curr1=curr1->next;
            curr2=curr2->next;
            
            curr=curr->next;
            
            if(curr)
                curr=curr->next;
        }
        
        curr1->next=head2;
        
        return head;

    }
};