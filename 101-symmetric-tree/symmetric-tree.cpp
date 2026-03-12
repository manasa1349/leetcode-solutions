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
    bool func(TreeNode* r1,TreeNode *r2){
        if(!r1 && !r2) return true; //both empty
        if(!r1 || !r2) return false; //contradict 1 empty 1 not
        if(r1->val!=r2->val) return false; //here we are checking
                                           //(r1->left,r2->right),
                                           //(r1->right,r2->left)
        return func(r1->left,r2->right) && func(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return func(root,root);
    }
};