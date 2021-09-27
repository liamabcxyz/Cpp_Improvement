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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* t) {
        if(!root)
            return NULL;
        
        if(root->val == p->val || root->val == t->val)
        {
            return root;
        }
        queue<TreeNode*> q;
        queue<TreeNode*> lastq;
        q.push(root);
        
        vector<vector<int>> vv;
        vv.push_back(vector<int>());
        
        bool one=false;
        bool two=false;
        
        vector<int> v1;
        vector<int> v2;
        
        while(!q.empty())
        {
            int size=q.size();
            vector<vector<int>> tvv;
            for(int i=0;i<size;i++)
            {
                TreeNode* tn = q.front();
                q.pop();

                if(tn->left)
                {
                    vector<int> tt1=vv[i];
                    tt1.push_back(tn->left->val);
                    tvv.push_back(tt1);
                    
                    if(tn->left == p || tn->left == t)
                    {
                        if(!one)
                        {
                            one=true;
                            v1=tvv.back();
                        }
                        else
                        {
                            two=true;
                            v2=tvv.back();
                        }
                            
                    }
                    q.push(tn->left);
                    lastq.push(tn->left);
                }
                
                if(tn->right)
                {
                    vector<int> tt2=vv[i];
                    tt2.push_back(tn->right->val);
                    tvv.push_back(tt2);
                    
                    if(tn->right == p || tn->right == t)
                    {
                        if(!one)
                        {
                            one=true;
                            v1=tvv.back();
                        }
                        else
                        {
                            two=true;
                            v2=tvv.back();                            
                        }
                     
                    }
                    q.push(tn->right);  
                    lastq.push(tn->right);
                }
                                  
            }
            
            vv=tvv;
            
            if(two)
            {
                int p1=v1.size()-1;
                int p2=v2.size()-1;
                
                for(int i=v1.size()-1;i>=0;i--)
                {
                    for(int j = v2.size()-1;j>=0;j--)
                    {
                        if(v1[i]==v2[j])
                        {
                            while(!lastq.empty())
                            {
                                int target=lastq.front()->val;
                                if(target==v1[i])
                                {
                                    return lastq.front();
                                }
                                lastq.pop();
                            }
                        }
                    }
                }
            }

        }
        return root;
    }
};
