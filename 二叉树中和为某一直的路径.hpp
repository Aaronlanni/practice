����һ�Ŷ������ĸ��ڵ��һ����������ӡ���������н��ֵ�ĺ�Ϊ����������
����·����·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ
��·����(ע��: �ڷ���ֵ��list�У����鳤�ȴ�����鿿ǰ)
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
    //ʹ�ù��б�����ԭ���ǣ���ÿ�θ�vector��ѹ������֮ʱ����Ҫ֪����һ����ѹ�����ʲô
    vector<int> tmp;
    vector<vector<int> > vt;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root==NULL)
            return vt;
        tmp.push_back(root->val);
        //��ʱ�ߵ�Ҷ�ӽ�㣬����ҵ�����·������һ����ѹ�뵽vector��
        if((expectNumber-root->val==0)&&(root->left==NULL)&&(root->right==NULL))
        {
            vt.push_back(tmp);
        }
        FindPath(root->left,expectNumber-root->val);
        FindPath(root->right,expectNumber-root->val);
        if(tmp.size()!=0)
            tmp.pop_back();
        return vt;
    }
};