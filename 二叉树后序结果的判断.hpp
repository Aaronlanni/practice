输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。

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