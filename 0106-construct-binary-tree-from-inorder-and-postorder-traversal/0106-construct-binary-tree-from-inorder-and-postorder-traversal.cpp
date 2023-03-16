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
    TreeNode* construct(vector<int>& in, int inS, int inE, vector<int>& post, int postS, int postE, unordered_map<int, int>& ump) {
        if(inS > inE || postS > postE) return NULL;
        
        int post_left_size = ump[post[postE]] - inS;
        TreeNode* root = new TreeNode(post[postE]);
        root -> left = construct(in, inS, ump[post[postE]] - 1, post, postS, postS + post_left_size - 1, ump);
        root -> right = construct(in, ump[post[postE]] + 1, inE, post,postS + post_left_size, postE - 1, ump);
        
        return root;

    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> ump;
        for(int i=0;i<inorder.size();i++) ump[inorder[i]] = i;
        return construct(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, ump);
    }
};