����һ����������ÿ���ڵ����нڵ�ֵ���Լ�����ָ�룬һ��ָ����һ���ڵ㣬
��һ������ָ��ָ������һ���ڵ㣩�����ؽ��Ϊ���ƺ��������head��
��ע�⣬���������벻Ҫ���ز����еĽڵ����ã�������������ֱ�ӷ��ؿգ�
/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if(pHead==NULL)
            return NULL;
        //�������Ҳ�����
        RandomListNode*cur=pHead;
        while(cur)
        {
            //�½��
            RandomListNode*newnode=new RandomListNode(cur->label);
            newnode->label=cur->label;
            newnode->next=NULL;
            //����
            RandomListNode*next=cur->next;
            cur->next=newnode;
            newnode->next=next;
            cur=next;
        }
        //���������random��
        cur=pHead;
        while(cur)
        {
            RandomListNode*copy=cur->next;
            if(cur->random==NULL)
            {
                copy->random=NULL;
            }
            else{
                copy->random=cur->random->next;
            }
            cur=cur->next->next;
        }
        //�����������������
        cur=pHead;
        //���������ͷ���
        RandomListNode* copylist=cur->next;
        RandomListNode* tail=cur->next;
        cur->next=copylist->next;
        cur=cur->next;
        while(cur)
        {
            RandomListNode*copy=cur->next;
            cur->next=copy->next;
            tail->next=copy;
            tail=copy;
            cur=cur->next;
            
        }
        return copylist;
    }
};