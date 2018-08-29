输入一个递增排序的数组和一个数字S，在数组中查找两个数，使得他们的和正好是S，
如果有多对数字的和等于S，输出两个数的乘积最小的。
class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        int length=array.size();
        vector<int>vt;
        if(length==0)
            return vt;
        int left=0;
        int right=length-1;
        while(left<right)
        {
            if((array[left]+array[right])==sum)
            {
                vt.push_back(array[left]);
                vt.push_back(array[right]);
                break;
            }
            else if((array[left]+array[right])>sum)
            {
                right--;
            }
            else
                left++;
        }
        return vt;
    }
};