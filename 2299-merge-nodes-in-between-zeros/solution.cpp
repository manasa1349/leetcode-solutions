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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *slow=head->next;
        ListNode *fast=slow;
        while(fast){
            int s=0;
            while(fast->val!=0){
                s+=fast->val;
                fast=fast->next;
            }
            slow->val=s;
            fast=fast->next;
            slow->next=fast;
            slow=slow->next;
        }
        return head->next;
    }
};
