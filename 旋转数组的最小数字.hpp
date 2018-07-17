把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。 
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。

class Solution {
public:
    //在此题中，利用二分查找的思路，由于是有序递增数组，因此只需要找出那个旋转之后的临界点
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.empty())
            return 0;
        int size=rotateArray.size();
        int left=0;
        int right=size-1;
        while(left<right)
        {
            int mid=left+((right-left)>>1);
            if(rotateArray[mid]>rotateArray[right])
                left=mid+1;
            else if(rotateArray[mid]<rotateArray[right])
                --right;
            else
               right=mid;
        }
        return rotateArray[left];
    }
};