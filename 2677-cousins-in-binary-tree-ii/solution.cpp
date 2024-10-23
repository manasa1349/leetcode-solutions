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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*>q;
        vector<int>total;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            int sum=0;
            for(int i=0;i<sz;i++){
                TreeNode *node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }
            total.push_back(sum);
        }
        root->val=0;
        int m=1;
        q.push(root);
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                TreeNode *node=q.front();
                int sibsum=((node->left)?node->left->val:0)+((node->right)?node->right->val:0);
                q.pop();
                if(node->left){
                    node->left->val=abs(total[m]-sibsum);
                    q.push(node->left);
                }
                if(node->right){
                    node->right->val=abs(total[m]-sibsum);
                    q.push(node->right);
                }
            }
            m++;
        }
        return root;
    }
};
