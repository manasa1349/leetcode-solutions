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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        ListNode *newhead=new ListNode();
        ListNode *prev=newhead;
        while(temp1 && temp2){
            if(temp1->val<=temp2->val){
                prev->next=temp1;
                temp1=temp1->next;
            }else{
                prev->next=temp2;
                temp2=temp2->next;
            }
            prev=prev->next;
        }
        if(temp1){
            prev->next=temp1;
        }
        if(temp2){
            prev->next=temp2;
        }
        return newhead->next;
    }
};
