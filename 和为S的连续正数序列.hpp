С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,�����Ͼ�д����
��ȷ����100�����������������ڴ�,�����뾿���ж������������������еĺ�Ϊ
100(���ٰ���������)��û���,���͵õ���һ������������Ϊ100������:
18,19,20,21,22�����ڰ����⽻����,���ܲ���Ҳ�ܿ���ҳ����к�ΪS����������
����? Good Luck!
������к�ΪS�������������С������ڰ��մ�С�����˳��
���м䰴�տ�ʼ���ִ�С�����˳��


class Solution {
public:
    //���ƵȲ���������n�����
    vector<vector<int> > FindContinuousSequence(int sum) {
        int slow=1;
        int fast=1;
        int equal=1;
        vector<vector<int> > vt;
        while(slow<=fast)
        {
            fast++;
            equal+=fast;
            //�����ʱ�����У���ǰ������������λ�ó�������Ҫ�ĺͣ����ʱ��Ҫ������ָ���ָ��ʹ����������������
            while(equal>sum)
            {
                equal-=slow;
                slow++;
            }
            if(equal==sum&&fast!=slow)
            {
                vector<int> tmp;
                for(int i=slow;i<=fast;++i)
                {
                    tmp.push_back(i);
                }
                vt.push_back(tmp);
            }
        }
        return vt;
    }
};