把只包含质因子2、3和5的数称作丑数（Ugly Number）。例如6、8都是丑数，
但14不是，因为它包含质因子7。 习惯上我们把1当做是第一个丑数。
求按从小到大的顺序的第N个丑数。
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