小明很喜欢数学,有一天他在做数学作业时,要求计算出9~16的和,他马上就写出了
正确答案是100。但是他并不满足于此,他在想究竟有多少种连续的正数序列的和为
100(至少包括两个数)。没多久,他就得到另一组连续正数和为100的序列:
18,19,20,21,22。现在把问题交给你,你能不能也很快的找出所有和为S的连续正数
序列? Good Luck!
输出所有和为S的连续正数序列。序列内按照从小至大的顺序，
序列间按照开始数字从小到大的顺序


class Solution {
public:
    //类似等差数列连续n项求和
    vector<vector<int> > FindContinuousSequence(int sum) {
        int slow=1;
        int fast=1;
        int equal=1;
        vector<vector<int> > vt;
        while(slow<=fast)
        {
            fast++;
            equal+=fast;
            //如果此时的序列，从前面数到结束的位置超过所需要的和，则此时需要调整慢指针的指向，使其对这个序列作调整
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