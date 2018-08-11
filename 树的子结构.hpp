输入两棵二叉树A，B，判断B是不是A的子结构。
（ps：我们约定空树不是任意一个树的子结构）
/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//在树的子结构中，要先找他们相等的根节点，如果找到，则将继续分别比较他们的孩子结点，一起往下走，直到子树走到空，则相当于找到了这个树的一半已经为子树
//如果此时在在右子树中查找，直到其也走到空，即将这个子树找到
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
                &&isChildTree(pRoot1->right,pRoot2->right);//左边是否相等
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
        return isChildTree(pRoot1,pRoot2)||//此时判断是否两个树每次传过去的根节点是否相同
            HasSubtree(pRoot1->left,pRoot2)||//是否在父子树的左半边
            HasSubtree(pRoot1->right,pRoot2);
    }
    
    
};