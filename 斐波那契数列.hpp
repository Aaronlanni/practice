大家都知道斐波那契数列，现在要求输入一个整数n，
请你输出斐波那契数列的第n项（从0开始，第0项为0）。n<=39
class Solution {
public:
    int Fibonacci(int n) {
        if(n==0)
            return 0;
        if(n<3)
            return 1;
        int t1=1;
        int t2=1;
        int sum=0;
         while(n-->=3)
         {
             sum=t1+t2;
             t1=t2;
             t2=sum;
         }
        return sum;
    }
};