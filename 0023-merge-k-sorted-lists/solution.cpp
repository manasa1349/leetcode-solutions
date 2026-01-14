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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<long long>arr;
        for(int i=0;i<lists.size();i++){
            ListNode *head=lists[i];
            while(head){
                arr.push_back(head->val);
                head=head->next;
            }
        }
        if(arr.size()<1){
            return nullptr;
        }
        sort(arr.begin(),arr.end());
        ListNode *ans=new ListNode(arr[0]);
        ListNode *temp=ans;
        for(int i=1;i<arr.size();i++){
            ListNode *dummy=new ListNode(arr[i]);
            ans->next=dummy;
            ans=ans->next;
        }
        return temp;
    }
};
