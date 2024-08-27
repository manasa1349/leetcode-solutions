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
    void inorder(TreeNode *root,vector<int>&res){
        if(!root) return;
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
    }
    TreeNode* insert(TreeNode *root1,vector<int>res){
        /*int n=res.size();
        int i=1;
        root1->val=res[0];
        while(n--){
            root1->right->val=res[i];
            i++;
        }
        return root1;*/
        TreeNode* newRoot = new TreeNode(res[0]);
        TreeNode* current = newRoot;
        for (int i = 1; i < res.size(); i++) {
            current->right = new TreeNode(res[i]);
            current = current->right;
        }
        return newRoot;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>res;
        inorder(root,res);
        return insert(root,res);    
    }
};
