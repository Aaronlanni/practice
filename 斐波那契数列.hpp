��Ҷ�֪��쳲��������У�����Ҫ������һ������n��
�������쳲��������еĵ�n���0��ʼ����0��Ϊ0����n<=39
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