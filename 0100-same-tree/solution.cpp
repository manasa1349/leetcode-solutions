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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        /*queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(p);
        q2.push(q);
        while(p&&q){
            while(!q1.empty() && !q2.empty()){
                q1.pop();
                if(p->left) q1.push(p->left);
                if(p->right) q1.push(p->right);
                q2.pop();
                if(q->left) q2.push(q->left);
                if(q->right) q2.push(q->right);
                if(q1!=q2) return false;
            }
        }
        return true;*/
        if(!p && !q) return true;
        if(!p || !q) return false;
        if(p->val !=q->val) return false;
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};
