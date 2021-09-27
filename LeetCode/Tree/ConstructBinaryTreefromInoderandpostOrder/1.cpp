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
    unordered_map<int, int> mp;
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        
        int k=postorder.size()-1;
        
        return helper(0, k, postorder, k);
    }
    
    TreeNode* helper(int inleft, int inright, vector<int>& postorder, int &k)
    {
        if(inleft>inright)
            return NULL;
        
        TreeNode *root= new TreeNode(postorder[k--]);
        
        int index=mp[root->val];
        
        root->right=helper(index+1,inright,postorder,k);        
        root->left=helper(inleft,index-1,postorder,k);
        
        return root;
    }
};
