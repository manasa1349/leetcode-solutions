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
    int getDecimalValue(ListNode* head) {
        struct ListNode* temp = head;
        int cnt = 0;
        while (temp) {
            temp = temp->next;
            cnt++;
        }
        int ans = 0;
        cout << cnt << endl;
        while (head) {
            ans += (pow(2, cnt - 1) * int(head->val));
            cnt--;
            head = head->next;
        }
        cout << cnt << endl;

        return ans;
    }
};
