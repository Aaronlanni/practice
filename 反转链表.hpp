输入一个链表，反转链表后，输出新链表的表头

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL)
            return NULL;
        if(pHead->next==NULL)
            return pHead;
        ListNode* pre = NULL;
        ListNode* cur = pHead;
        ListNode* nt = pHead->next;
        while(cur!=NULL)
        {
            cur->next=pre;
            pre=cur;
            cur=nt;
            if(nt!=NULL)
                nt=nt->next;
        }
        pHead=pre;
        return pHead;
    }
};