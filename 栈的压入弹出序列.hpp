���������������У���һ�����б�ʾջ��ѹ��˳��
���жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳�򡣼���ѹ��ջ���������־�����ȡ�
��������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ���ж�Ӧ��
һ���������У���4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С�
��ע�⣺���������еĳ�������ȵģ�
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        int size=pushV.size();
       
        stack<int> s;

        int i=0;
        int j=0;
        while(i<size)
        {
            if(pushV[i]==popV[j])
            {
                ++i;
                ++j;
            }
            else{
                if(!s.empty()&&s.top()==popV[j])
                {
                    while(!s.empty()&&s.top()==popV[j])
                    {
                        s.pop();
                        ++j;
                    }
                }
                else
                {
                    s.push(pushV[i]);
                    ++i;
                }
            }
        }
        while(!s.empty())
        {
            if(popV[j]==s.top())
            {
                s.pop();
                ++j;
            }
            else
                return false;
        }
        return true;
    }
};