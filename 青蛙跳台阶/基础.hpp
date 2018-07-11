class Solution {
public:
    int jumpFloor(int number) {
        if(number<=0)
            return 0;
        if(number==1)
            return 1;
        if(number==2)
            return 2;
        int t1=1;
        int t2=2;
        int sum=0;
        while(number-->=3)
        {
            sum=t1+t2;
            t1=t2;
            t2=sum;
        }
        return sum;
    }
};