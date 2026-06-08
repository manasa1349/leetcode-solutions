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

        vector<int>lft,rgt;
        ListNode *temp=head;
        while(temp){
            if(temp->val<x){
                lft.push_back(temp->val);
            }else if(temp->val>=x){
                rgt.push_back(temp->val);
            }
            temp=temp->next;
        }

        int idx=0;
        if(lft.size()!=0){
            temp=new ListNode(lft[0]);
        }else if(lft.empty() && !rgt.empty()){
            temp=new ListNode(rgt[0]);
            idx=1;
        }
        ListNode *ans=temp;
        for(int i=1;i<lft.size();i++){
            ListNode* node=new ListNode(lft[i]);
            temp->next=node;
            temp=temp->next;
        }
        for(int i=idx;i<rgt.size();i++){
            ListNode* node=new ListNode(rgt[i]);
            temp->next=node;
            temp=temp->next;
        }
        return ans;
    }
};