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
    /*void pre(TreeNode *root,vector<int>&res){
        if(!root) return;
        res.push_back(root->val);
        pre(root->left,res);
        pre(root->right,res);
    }*/
    TreeNode* searchBST(TreeNode* root, int v) {
        if(!root) return NULL;
        if(root->val==v){
            /*vector<int>res;
            pre(root,res);
            return res;*/
            return root;
        }
        else if(root->val>v){
            return searchBST(root->left,v);
        }else if (v>root->val){
            return searchBST(root->right,v);
        }
        return NULL;
        
    }
};
