����һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��
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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree==NULL)
            return NULL;
        TreeNode*head=NULL;
        TreeNode*prev=NULL;
        _Convert(pRootOfTree,prev);
        head=pRootOfTree;
        //��ͷ���
        while(head->left!=NULL)
        {
            head=head->left;
        }
        return head;
    }
    void _Convert(TreeNode* pRootOfTree,TreeNode*& prev)
    {
        if(pRootOfTree==NULL)
            return;
        //һֱ�ߵ��������Ŀ�
        _Convert(pRootOfTree->left,prev);
        pRootOfTree->left=prev;//�����������ӵ�prev��������
        if(prev)
        {
            //����������
            prev->right=pRootOfTree;
        }
        prev=pRootOfTree;
        _Convert(pRootOfTree->right,prev);
    }
};