����ĳ��������ǰ���������������Ľ�������ؽ����ö�������
���������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}��
���ؽ������������ء�

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
        //�������ڵ�
        TreeNode* pRoot=new TreeNode(pre[0]);
        //����������в���
        
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
        //�ֱ��������ҵı߽�
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
        
        //�Ա߽绮������֮��Ȼ�����ؽ�������
        pRoot->left=reConstructBinaryTree(pre_left,vin_left);
        pRoot->right=reConstructBinaryTree(pre_right,vin_right);
        return pRoot;
    }
};