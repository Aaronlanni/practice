输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，
则重建二叉树并返回。

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.empty()||vin.empty())
            return NULL;
        int inlen=vin.size();
        //创建根节点
        TreeNode* pRoot=new TreeNode(pre[0]);
        //在中序遍历中查找
        
        vector<int> pre_left;
        vector<int> pre_right;
        vector<int> vin_left;
        vector<int> vin_right;
        int flag=0;
        while(flag<inlen)
        {
            if(pre[0]==vin[flag])
            {
                break;
            }
            ++flag;
        }
        //分别找其左右的边界
        for(int i=0;i<flag;++i)
        {
            vin_left.push_back(vin[i]);
            pre_left.push_back(pre[i+1]);
        }
        for(int i=flag+1;i<inlen;++i)
        {
            vin_right.push_back(vin[i]);
            pre_right.push_back(pre[i]);
        }
        
        //对边界划分清晰之后，然后在重建二叉树
        pRoot->left=reConstructBinaryTree(pre_left,vin_left);
        pRoot->right=reConstructBinaryTree(pre_right,vin_right);
        return pRoot;
    }
};