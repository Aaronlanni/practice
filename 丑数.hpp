��ֻ����������2��3��5��������������Ugly Number��������6��8���ǳ�����
��14���ǣ���Ϊ������������7�� ϰ�������ǰ�1�����ǵ�һ��������
�󰴴�С�����˳��ĵ�N��������
class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        if(index<7)
            return index;
        int f2=0;
        int f3=0;
        int f5=0;
        vector<int> vt(index);
        vt[0]=1;
        for(int i=1;i<index;++i)
        {
            vt[i]=min(vt[f2]*2,min(vt[f3]*3,vt[f5]*5));
            if(vt[i]==vt[f2]*2)
                f2++;
            if(vt[i]==vt[f3]*3)
                f3++;
            if(vt[i]==vt[f5]*5)
                f5++;
        }
        return vt[index-1];
    }
};