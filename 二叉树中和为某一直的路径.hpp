输入一颗二叉树的跟节点和一个整数，打印出二叉树中结点值的和为输入整数的
所有路径。路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一
条路径。(注意: 在返回值的list中，数组长度大的数组靠前)
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
    //使用公有变量的原因是，在每次给vector中压入数据之时，需要知道上一层中压入的是什么
    vector<int> tmp;
    vector<vector<int> > vt;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
        if(root==NULL)
            return vt;
        tmp.push_back(root->val);
        //此时走到叶子结点，如果找到这条路径，则一点点的压入到vector中
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