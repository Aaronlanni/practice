输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。
要求不能创建任何新的结点，只能调整树中结点指针的指向。
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
        //找头结点
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
        //一直走到左子树的空
        _Convert(pRootOfTree->left,prev);
        pRootOfTree->left=prev;//将左子树连接到prev，线索化
        if(prev)
        {
            //处理右子树
            prev->right=pRootOfTree;
        }
        prev=pRootOfTree;
        _Convert(pRootOfTree->right,prev);
    }
};