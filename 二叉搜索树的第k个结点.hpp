����һ�ö��������������ҳ����еĵ�kС�Ľ�㡣���磬 ��5��3��7��2��4��6��8��    
�У��������ֵ��С˳�����С����ֵΪ4��
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
    TreeNode* KthNode(TreeNode* pRoot, int k)
    {
        if(pRoot==NULL||k<1)
            return NULL;
        count=k;
        TreeNode*tmp=NULL;
        _KthNode(pRoot,tmp);
        return tmp;
        
    }
    
    void _KthNode(TreeNode* pRoot,TreeNode*& tmp)
    {
        if(pRoot==NULL)
            return;
        _KthNode(pRoot->left,tmp);
        count--;
        if(!count)
            tmp=pRoot;
        _KthNode(pRoot->right,tmp);
    }
    private:
    int count;
};