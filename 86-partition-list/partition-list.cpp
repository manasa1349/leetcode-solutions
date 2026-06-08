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
    ListNode* partition(ListNode* head, int x) {

        if(!head) return nullptr;
        ListNode *lft=new ListNode(-1);
        ListNode *rgt=new ListNode(-1);
        ListNode *lftdummy=lft, *rgtdummy=rgt,*temp=head;

        while(temp){
            if(temp->val<x){
                lft->next=temp;
                lft=lft->next;
            }else{
                rgt->next=temp;
                rgt=rgt->next;
            }
            temp=temp->next;
        }
        rgt->next=nullptr;
        lft->next=rgtdummy->next;
        return lftdummy->next;
    }
};