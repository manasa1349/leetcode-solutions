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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return nullptr;
        if(head->next==nullptr) return head;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *curr=dummy;
        while(curr->next && curr->next->next){
            ListNode *frst=curr->next;
            ListNode *scnd=curr->next->next;
            frst->next=scnd->next;
            scnd->next=frst;
            curr->next=scnd;
            curr=frst;
        }
        return dummy->next;
    }
};
