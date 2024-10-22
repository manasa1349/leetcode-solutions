/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int h1=0;
        int h2=0;
        ListNode *t1=headA;
        ListNode *t2=headB;
        while(t1){
            t1=t1->next;
            h1++;
        }
        while(t2){
            t2=t2->next;
            h2++;
        }
        if(t1!=t2){
            return nullptr;
        }
        if(h1>h2){
            int k=h1-h2;
            while(headA && k){
                headA=headA->next;
                k--;
            }
        }
        else if(h1<h2){
            int k=h2-h1;
            while(headB && k){
                headB=headB->next;
                k--;
            }
        }
        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};
