��һ�����������а����������ҳ�������Ļ�����ڽ�㣬�������null��
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead==NULL||pHead->next==NULL)
            return NULL;
        ListNode*first=pHead->next->next;
        ListNode*second=pHead->next;
        while(first->next!=NULL&&first!=second)
        {
            first=first->next->next;
            second=second->next;
        }
        if(first->next==NULL)
            return NULL;
        second=pHead;
        while(second!=first)
        {
            second=second->next;
            first=first->next;
        }
        return first;
    }
};