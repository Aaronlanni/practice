����һ������A[0,1,...,n-1],�빹��һ������B[0,1,...,n-1],����B�е�Ԫ��
B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]������ʹ�ó���

class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
        int length=A.size();
        vector<int> vt;
        int tmp=1;
        if(A.empty())
            return vt;
        for(int i=0;i<length;++i)
        {
            for(int j=0;j<length;++j)
            {
                if(i!=j)
                {
                    tmp*=A[j];
                }
            }
            vt.push_back(tmp);
            tmp=1;
        }
        return vt;
    }
};