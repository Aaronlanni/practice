����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢����
ע�⣺���еĽ�㲻�����������ӽڵ㣬ͬʱ����ָ�򸸽���ָ��

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
        //�Һ��Ӵ��ڣ�����һ�����Ϊ�Һ��ӵ�����
        if(pNode->right!=NULL)
        {
            cur=pNode->right;
            while(cur->left)
                cur=cur->left;
            return cur;
        }
        if(pNode->next == NULL) return NULL;
        //��ʱ�Һ��Ӳ����ڣ���������ö���������ߵ�һ�����
        if(pNode==pNode->next->left)
            return pNode->next;
        
        //�����ʱ�������������ҵĽ�㣬����һ�����Ӧ������һ��ĸ����
        cur=pNode->next;
        while(cur&&cur->next!=NULL)
        {
            if(cur==cur->next->left)
                return cur->next;
            //����������������������Ϊ���������������ҽ��
            cur=cur->next;//ֱ���ҵ����ڵ�ĸ���㣬��ʱ���ڵ�ĸ����Ϊ�գ���ˣ����ҵĽ�����һ�����Ϊ��
        }
        return NULL;
    }
};