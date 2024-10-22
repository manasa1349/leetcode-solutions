/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*>q;
       // priority_queue <int, vector<int>, greater<int>> ans;
        vector<long long>ans;
        q.push(root);
        while(!q.empty()){
            long long len=q.size();
            long long sum=0;
            for(int i=0;i<len;i++){
                TreeNode *temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(sum);
           /* ans.push(sum);
            while(ans.size()<=k){
                ans.pop();
            }*/
        }
        if(ans.size()<k){
            return -1;
        }
        sort(ans.begin(),ans.end(),greater<>());
        return ans[k-1];
        //return ans.top();
    }
};
