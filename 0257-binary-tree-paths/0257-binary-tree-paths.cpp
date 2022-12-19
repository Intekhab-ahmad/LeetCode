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
    void solve(vector<string> &ans, TreeNode* root,string str){
        if(root->left==NULL && root->right==NULL){
            
            ans.push_back(str);
            return;
        }
        
       
        
        if(root->left)  solve(ans,root->left,str + "->" + to_string(root->left->val));
        if(root->right) solve(ans,root->right,str + "->" + to_string(root->right->val));
        
        
              
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> ans;
        string str=to_string(root->val);
        if(root==NULL) return ans;
        
        solve(ans,root,str);
        return ans;
        
        
    }
};