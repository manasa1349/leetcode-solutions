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
    TreeNode* buildTreeHelper(vector<int>&preorder,vector<int>&postorder,unordered_map<int, int>&postIndex,int& preIndex,int left,int right) {
        if (left > right) return nullptr;
        TreeNode* root = new TreeNode(preorder[preIndex++]);
        if (left == right) return root;
        int leftChildIndex = postIndex[preorder[preIndex]];
        root->left = buildTreeHelper(preorder, postorder, postIndex, preIndex, left,leftChildIndex);
        root->right = buildTreeHelper(preorder, postorder, postIndex, preIndex, leftChildIndex + 1, right - 1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        unordered_map<int, int> postIndex;
        int preIndex = 0, n = postorder.size();
        for (int i = 0; i < n; i++) postIndex[postorder[i]] = i;
        return buildTreeHelper(preorder, postorder, postIndex, preIndex, 0, n - 1);
    }
};
