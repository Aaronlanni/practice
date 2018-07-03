题目描述：search-in-rotated-sorted-array-ii
Follow up for "Search in Rotated Sorted Array":
What if duplicates are allowed?
Would this affect the run-time complexity? How and why?
Write a function to determine if a given target is in the array.


class Solution {
public:
  bool search(int A[], int n, int target) {
        if(A==NULL||n<=0)
            return false;
        int left=0;
        int right=n-1;
        int mid;
        while(left <= right)
        {
            mid=left+((right-left)>>1);
            //此时表明为有序，递增数组
            if(A[mid]==target)
                return true;
            else if(A[left] < A[mid])
            {
                if(target>=A[left] && target<=A[mid])
                    right=mid-1;
                else
                    left=mid+1;
            }
            //递减数组,此时右半部分为有序的
            else if(A[left] > A[mid])
            {
                if(target >= A[mid] && target <= A[right])
                    left=mid+1;
                else
                    right=mid-1;
            }
            //当两个元素大小相等之时，则此时的区间不能确定
            else
            {
                left++;
            }
        }
        return false;
    }
};