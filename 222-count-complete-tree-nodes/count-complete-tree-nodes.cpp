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
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int leftH = 0, rightH = 0;
        TreeNode *l = root, *r = root;

        // Calculate left-most height
        while (l) {
            leftH++;
            l = l->left;
        }

        // Calculate right-most height
        while (r) {
            rightH++;
            r = r->right;
        }

        // If heights match, it's a perfect binary tree
        if (leftH == rightH) {
            return (1 << leftH) - 1; // 2^h - 1
        }

        // If heights don't match, recurse normally
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
