����һ����������������һ������S���������в�����������ʹ�����ǵĺ�������S��
����ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
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