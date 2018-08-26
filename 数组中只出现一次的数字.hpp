一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。
请写程序找出这两个只出现一次的数字。
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        if(data.size()<2)
            return;
        int flag=0;
        for(int i=0;i<data.size();++i)
        {
            flag^=data[i];
        }
        
        int index=0;
        while((flag&1)==0&&index<8*sizeof(int))//确保刚才按位与下来的是奇数还是偶数
        {
            flag=flag>>1;//将1移至最低位
            index++;
        }
        
        *num1=*num2=0;
        for(int i=0;i<data.size();++i)
        {
            if(IsBit(data[i],index))//分别将其划分为不同的子数组
            {
                *num1^=data[i];
            }
            else
            {
                *num2^=data[i];
            }
        }
    }
    
    bool IsBit(int data,unsigned int index)
    {
        data=data>>index;
        return (data&1);
    }
};