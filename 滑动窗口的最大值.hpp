����һ������ͻ������ڵĴ�С���ҳ����л�����������ֵ�����ֵ�����磬
�����������{2,3,4,2,6,2,5,1}���������ڵĴ�С3����ôһ������6���������ڣ�
���ǵ����ֵ�ֱ�Ϊ{4,4,6,6,6,5}�� �������{2,3,4,2,6,2,5,1}�Ļ���������
����6���� {[2,3,4],2,6,2,5,1}�� {2,[3,4,2],6,2,5,1}�� {2,3,[4,2,6],2,5,1}�� 
{2,3,4,[2,6,2],5,1}�� {2,3,4,2,[6,2,5],1}�� {2,3,4,2,6,[2,5,1]}��

class Solution {
public:
    vector<int> maxInWindows(const vector<int>& num, unsigned int size)
    {
        vector<int> vt;
        if(num.empty()||size<1||size>num.size())
            return vt;
        int length=num.size();
        int max=0;
        for(int i=0;i<=(length-size);++i)
        {
            max=num[i];
            for(int j=i+1;j<i+size;++j)
            {
                if(max<num[j])
                    max=num[j];
            }
            vt.push_back(max);
        }
        return vt;
    }
};