/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        null case
        if(!root)
            return NULL;
//         base case i.e if current node is p or q, then its LCA
        if(root->val==p->val||root->val==q->val)
            return root;
//      Check in leftsubtree and right subtree
        TreeNode* leftSearch = lowestCommonAncestor(root->left,p,q);
        TreeNode* rightSearch = lowestCommonAncestor(root->right,p,q);
        // If not in left, return the result in rightsubtree
        if(leftSearch==NULL)
            return rightSearch;
        if(rightSearch==NULL)
            return leftSearch;
			//since both are not null, the root is answer
        return root;
    }
};
