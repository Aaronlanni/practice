����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
����������Yes,�������No���������������������������ֶ�������ͬ��

class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty())
            return false;
        int size=sequence.size();
        if(size==1)
            return true;
        int flag=sequence[size-1];
        int i=0;
        for(;i<size;++i)
        {
            if(sequence[i]>flag)
                break;
        }
        for(int j=0;j<i;++j)
        {
            if(sequence[j]>flag)
                return false;
        }
        for(int j=i;j<size;++j)
        {
            if(sequence[j]< flag)
                return false;
        }
        return true;
    }
};