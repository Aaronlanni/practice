��Ŀ������Given a singly linked list L: L 0��L 1������L n-1��L n, 
reorder it to: L 0��L n ��L 1��L n-1��L 2��L n-2���� 
You must do this in-place without altering the nodes�� values. 
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
        //������������м���
        ListNode *slow=head;
        ListNode *fast=head->next;
        while((fast!=NULL)&&(fast->next!=NULL))
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        //����벿�ֵ���������
        ListNode *secondlist=slow->next;
        //��ǰ�������ַ�Ϊ����������
        slow->next=NULL;
        //����
        ListNode *pre=NULL;
        slow=secondlist;
        fast=secondlist->next;
        while(slow!=NULL)
        {
            //�˳�֮����preΪͷ���
            slow->next=pre;
            pre=slow;
            slow=fast;
            if(fast)
                fast=fast->next;
        }
        //���ڶ���������뵽��һ����
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