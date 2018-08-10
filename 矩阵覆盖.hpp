我们可以用2*1的小矩形横着或者竖着去覆盖更大的矩形。
请问用n个2*1的小矩形无重叠地覆盖一个2*n的大矩形，总共有多少种方法？

//菲波那切数列1,3,5,8,13.....f(n)=f(n-1)+f(n-2)
class Solution {
public:
    int rectCover(int number) {
        if(number==0)
            return 0;
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int f1=1;
        int f2=2;
        int sum=0;
        for(int i=3;i<=number;++i)
        {
            sum=f1+f2;
            f1=f2;
            f2=sum;
        }
        return sum;
    }
};