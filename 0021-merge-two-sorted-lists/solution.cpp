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
            ListNode *neww=new ListNode();
            if(temp1->val<=temp2->val){
                neww->val=temp1->val;
                neww->next=NULL;
                temp1=temp1->next;
            }else{
                neww->val=temp2->val;
                neww->next=NULL;
                temp2=temp2->next;
            }
            prev->next=neww;
            prev=neww;
        }
        while(temp1){
            ListNode *neww=new ListNode();
            neww->val=temp1->val;
            neww->next=NULL;
            temp1=temp1->next;
            prev->next=neww;
            prev=neww;
        }
        while(temp2){
            ListNode *neww=new ListNode();
            neww->val=temp2->val;
            neww->next=NULL;
            temp2=temp2->next;
            prev->next=neww;
            prev=neww;
        }
        return newhead->next;
    }
};
