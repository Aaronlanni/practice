给定一个数组A[0,1,...,n-1],请构建一个数组B[0,1,...,n-1],其中B中的元素
B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]。不能使用除法

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