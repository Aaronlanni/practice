�������ö�����A��B���ж�B�ǲ���A���ӽṹ��
��ps������Լ��������������һ�������ӽṹ��
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//�������ӽṹ�У�Ҫ����������ȵĸ��ڵ㣬����ҵ����򽫼����ֱ�Ƚ����ǵĺ��ӽ�㣬һ�������ߣ�ֱ�������ߵ��գ����൱���ҵ����������һ���Ѿ�Ϊ����
//�����ʱ�����������в��ң�ֱ����Ҳ�ߵ��գ�������������ҵ�
class Solution {
public:
    bool isChildTree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot2==NULL)
            return true;
        if(pRoot1==NULL)
            return false;
        if(pRoot1->val==pRoot2->val)
        {
            return isChildTree(pRoot1->left,pRoot2->left)
                &&isChildTree(pRoot1->right,pRoot2->right);//����Ƿ����
        }
        else
        {
            return false;
        }
    }
    
    
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
    {
        if(pRoot1==NULL||pRoot2==NULL)
            return false;
        return isChildTree(pRoot1,pRoot2)||//��ʱ�ж��Ƿ�������ÿ�δ���ȥ�ĸ��ڵ��Ƿ���ͬ
            HasSubtree(pRoot1->left,pRoot2)||//�Ƿ��ڸ�����������
            HasSubtree(pRoot1->right,pRoot2);
    }
    
    
};