题目描述：Given a singly linked list L: L 0→L 1→…→L n-1→L n, 
reorder it to: L 0→L n →L 1→L n-1→L 2→L n-2→… 
You must do this in-place without altering the nodes’ values. 
For example, 
Given{1,2,3,4}, reorder it to{1,4,2,3}. 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode *head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL)
            return;
        //找这条链表的中间结点
        ListNode *slow=head;
        ListNode *fast=head->next;
        while((fast!=NULL)&&(fast->next!=NULL))
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //将后半部分的链表逆置
        ListNode *secondlist=slow->next;
        //将前后两部分分为了两条链表
        slow->next=NULL;
        //逆置
        ListNode *pre=NULL;
        slow=secondlist;
        fast=secondlist->next;
        while(slow!=NULL)
        {
            //退出之后，则pre为头结点
            slow->next=pre;
            pre=slow;
            slow=fast;
            if(fast)
                fast=fast->next;
        }
        //将第二条链表插入到第一条中
        slow=head;
        fast=head;
        while(slow&&pre)
        {
            if(fast)
                fast=slow->next;
            slow->next=pre;
            pre=pre->next;
            slow->next->next=fast;
            slow=fast;
        }
    }
};