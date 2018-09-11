从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int> > vt;
            if(pRoot==NULL)
                return vt;
            queue<TreeNode*> q;
            q.push(pRoot);
            while(!q.empty())
            {
                //每次进来都进行初始化，因此v中会在每次初始化之时均为空
                vector<int> v;
                int flag=0;
                int size=q.size();
                while(flag++ < size)
                {
                    TreeNode* cur=q.front();
                    v.push_back(cur->val);
                    q.pop();
                    if(cur->left)
                        q.push(cur->left);
                    if(cur->right)
                        q.push(cur->right);
                   
                }
                vt.push_back(v);
            }
            return vt;
        }
    
};