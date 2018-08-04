/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> vt;
        if(root==NULL)
            return vt;
        TreeNode*cur = root;
        q.push(cur);
        
        while(!q.empty())
        {
            cur=q.front();
            vt.push_back(cur->val);
            q.pop();
            if(cur->left)
            {
                q.push(cur->left);
            }
            if(cur->right)
            {
                q.push(cur->right);
            }
            
        }
        return vt;
    }
};