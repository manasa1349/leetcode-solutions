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
    long long sum=0;
    int change(TreeNode *node){
        if(!node) return 0;
        int l=change(node->left);
        int r=change(node->right);
        int value=node->val;
        node->val=value+l+r;
        return node->val;
    }
    void func(TreeNode* root,long long &maxpro){
        if(!root) return;
        if(root->left){
            long long k1=root->left->val;
            long long k2=root->val;
            maxpro=max(maxpro,k1*(sum-k1));
            func(root->left,maxpro);
        }
        if(root->right){
            long long k1=root->right->val;
            long long k2=root->val;
            maxpro=max(maxpro,k1*(sum-k1));
            func(root->right,maxpro);
        }

    }
    const long long MOD=1e9+7;
    int maxProduct(TreeNode* root) {
        long long maxpro=0;
        sum=change(root);
        func(root,maxpro);
        return maxpro%MOD;
    }
};
