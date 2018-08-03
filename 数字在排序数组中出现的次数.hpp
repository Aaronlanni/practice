统计一个数字在排序数组中出现的次数。
class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int size=data.size();
        if(data.empty())
            return 0;
        int left=0;
        int right=size-1;
        while(left<=right)
        {
            int mid=left+((right-left)>>1);
            if(data[mid]>k)
            {
                right=mid-1;
            }
            else if(data[mid]<k)
            {
                left=mid+1;
            }
            else{
                if(data[left]==k&&data[right]==k)
                    return (right-left+1);
                else if(data[left]==k&&data[right]!=k)
                    right--;
                else if(data[left]!=k&&data[right]==k)
                    left++;
                else
                {
                    left++;
                    right--;
                }
            }
        }
        return 0;
    }
};