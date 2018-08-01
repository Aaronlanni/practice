输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，
另一个特殊指针指向任意一个节点），返回结果为复制后复杂链表的head。
（注意，输出结果中请不要返回参数中的节点引用，否则判题程序会直接返回空）
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
        //拷贝并且插入结点
        RandomListNode*cur=pHead;
        while(cur)
        {
            //新结点
            RandomListNode*newnode=new RandomListNode(cur->label);
            newnode->label=cur->label;
            newnode->next=NULL;
            //插入
            RandomListNode*next=cur->next;
            cur->next=newnode;
            newnode->next=next;
            cur=next;
        }
        //置新链表的random域
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
        //将拷贝的链拆解下来
        cur=pHead;
        //找新链表的头结点
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