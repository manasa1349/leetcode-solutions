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
class FindElements {
public:
    TreeNode* root;
    unordered_set<int>st;
    void recur(TreeNode* node,int val){
        if(!node){
            return;
        }
        node->val=val;
        st.insert(val);
        if(node->left){
            //root->left->val=2*root->val+1;
            recur(node->left,2*val+1);
        }
        if(root->right){
            //root->right->val=2*root->val+2;
            recur(node->right,2*val+2);
        }
    }
    FindElements(TreeNode* root) {
        this->root=root;
        recur(root,0);
    }
    /*bool findd(TreeNode *node,int target){
        if(!node){
            return false;
        }
        if(node->val==target){
            return true;
        }
        return findd(root->left,target) || findd(root->right,target);
    }*/
    bool find(int target) {
        //return findd(root,target);
        return st.count(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
