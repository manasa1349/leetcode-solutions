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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL && n==1){
            head=head->next;
            return head;
        }
        ListNode *temp=head;
        int sz=0;
        while(temp){
            sz++;
            temp=temp->next;
        }
        if (sz == n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int k = sz - n - 1;
        ListNode* curr = head;
        while (k--) {
            curr = curr->next;
        }
        ListNode* del = curr->next;
        curr->next = curr->next->next;
        delete del;
        return head;
    }
};
