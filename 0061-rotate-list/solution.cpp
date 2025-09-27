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
        if(!head) return nullptr;
        if(!head->next) return head;
        ListNode* temp=head;
        int n=1;
        while(temp->next){
            temp=temp->next;
            n++;
        }
        k=k%n;
        cout<<k<<endl;
        if(k==0) return head;
        temp->next=head;
        temp=temp->next;
        int c=(n-k)-1;
        while(c--){
            temp=temp->next;
            cout<<temp->next->val<<" ";
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};
