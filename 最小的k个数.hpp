����n���������ҳ�������С��K������
��������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4,��

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> vt;
        if(input.empty()||k<=0)
            return vt;
        if(k>input.size())
            return vt;
        sort(input.begin(),input.end()-1);
        for(int i=0;i<k;++i)
        {
            vt.push_back(input[i]);
        }
        return vt;
    }
};