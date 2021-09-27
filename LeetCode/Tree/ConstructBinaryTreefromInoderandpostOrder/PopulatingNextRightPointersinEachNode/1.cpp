/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return nullptr;
        
        Node* res=root;
        int sum=1;
        int index=1;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty())
        {
            Node* tn=q.front();
            if(tn->left)
            {
                q.push(tn->left);
                q.push(tn->right);                
            }

            
            q.pop();
            
            if(index==sum)
            {
                tn->next=NULL;
                sum=sum*2;
                index=1;
            }
            else
            {
                index++;
                tn->next=q.front();
            }
            
        }
        
        return res;
    }
};
