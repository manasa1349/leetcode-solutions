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
    TreeNode* createBinaryTree(vector<vector<int>>&arr) {
        unordered_map<int,TreeNode*>mp;
        unordered_set<int>child;
        for(int i=0;i<arr.size();i++){
            //if parent or child node not created till now then create them
            // if(mp.find(arr[i][0])==mp.end()){
            //     mp[arr[i][0]]=new TreeNode(arr[i][0]);
            // }
            // if(mp.find(arr[i][1])==mp.end()){
            //     mp[arr[i][1]]=new TreeNode(arr[i][1]);
            // }
            mp.try_emplace(arr[i][0], new TreeNode(arr[i][0]));
            mp.try_emplace(arr[i][1], new TreeNode(arr[i][1]));

            //attach parent and child either l or r
            if(arr[i][2]==1){
                mp[arr[i][0]]->left=mp[arr[i][1]];
            }else{
                mp[arr[i][0]]->right=mp[arr[i][1]];
            }

            //maintain child data to check root
            //root cannot be child to anyone
            child.insert(arr[i][1]);
        }
        for(int i=0;i<arr.size();i++){
            if(child.find(arr[i][0])==child.end()){

                return mp[arr[i][0]];
            }
        }
        return nullptr;
    }
};