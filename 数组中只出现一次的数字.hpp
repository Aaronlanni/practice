һ�����������������������֮�⣬���������ֶ�������ż���Ρ�
��д�����ҳ�������ֻ����һ�ε����֡�
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()<2)
            return;
        int flag=0;
        for(int i=0;i<data.size();++i)
        {
            flag^=data[i];
        }
        
        int index=0;
        while((flag&1)==0&&index<8*sizeof(int))//ȷ���ղŰ�λ������������������ż��
        {
            flag=flag>>1;//��1�������λ
            index++;
        }
        
        *num1=*num2=0;
        for(int i=0;i<data.size();++i)
        {
            if(IsBit(data[i],index))//�ֱ��仮��Ϊ��ͬ��������
            {
                *num1^=data[i];
            }
            else
            {
                *num2^=data[i];
            }
        }
    }
    
    bool IsBit(int data,unsigned int index)
    {
        data=data>>index;
        return (data&1);
    }
};