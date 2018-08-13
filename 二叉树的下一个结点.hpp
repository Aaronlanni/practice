给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并返回
注意：树中的结点不仅包含左右子节点，同时包含指向父结点的指针

/*
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
*/
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
        if(pNode==NULL)
            return NULL;
        TreeLinkNode*cur=NULL;
        //右孩子存在，则下一个结点为右孩子的左孩子
        if(pNode->right!=NULL)
        {
            cur=pNode->right;
            while(cur->left)
                cur=cur->left;
            return cur;
        }
        if(pNode->next == NULL) return NULL;
        //此时右孩子不存在，例如是这棵二叉树最左边的一个结点
        if(pNode==pNode->next->left)
            return pNode->next;
        
        //如果此时是左子树的最右的结点，其下一个结点应该是上一层的父结点
        cur=pNode->next;
        while(cur&&cur->next!=NULL)
        {
            if(cur==cur->next->left)
                return cur->next;
            //如果不是上面那种情况，则为根的右子树的最右结点
            cur=cur->next;//直到找到根节点的父结点，此时根节点的父结点为空，因此，最右的结点的下一个结点为空
        }
        return NULL;
    }
};