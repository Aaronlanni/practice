��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת��
����һ���Ǽ�����������һ����ת�������ת�������СԪ�ء� 
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1�� 
NOTE������������Ԫ�ض�����0���������СΪ0���뷵��0��

class Solution {
public:
    //�ڴ����У����ö��ֲ��ҵ�˼·������������������飬���ֻ��Ҫ�ҳ��Ǹ���ת֮����ٽ��
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