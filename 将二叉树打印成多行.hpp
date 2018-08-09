���ϵ��°����ӡ��������ͬһ����������������ÿһ�����һ��

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
                vector<int> tmp;
                int flag=0;//��¼�˴�������ѹ��Ԫ�صĸ���
                int size=q.size();
                while(flag++<size)
                {
                    TreeNode*cur=q.front();
                    tmp.push_back(cur->val);
                    q.pop();
                    if(cur->left)
                        q.push(cur->left);
                    if(cur->right)
                        q.push(cur->right);
                }
                vt.push_back(tmp);
            }
            return vt;
        }
    
};