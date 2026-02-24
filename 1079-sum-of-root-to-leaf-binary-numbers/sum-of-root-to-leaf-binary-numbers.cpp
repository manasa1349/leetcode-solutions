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
    int ans=0;
    void func(TreeNode *root,string ds){
        if(!root) return;
        ds+=to_string(root->val);
        if(!root->left && !root->right){
            if(ds.size()>0){
                ans += stoi(ds, nullptr, 2);
            }
            // ds.pop_back();
            return;
        }
        func(root->left,ds);
        func(root->right,ds);
    }
    int sumRootToLeaf(TreeNode* root) {
        if(!root){
            return 0;
        }
        func(root,"");
        return ans;
    }
};