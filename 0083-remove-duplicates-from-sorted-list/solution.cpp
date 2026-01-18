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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        ListNode *temp=head;
        while(temp->next && temp->next->next){
            if(temp->val==temp->next->val){
                ListNode *node=temp->next->next;
                temp->next=node;
            }else{
                temp=temp->next;
            }
        }
        if(temp->next && temp->val==temp->next->val){
            temp->next=nullptr;
        }
        return head;
    }
};
