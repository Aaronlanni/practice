���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����

//�Ʋ���������1,3,5,8,13.....f(n)=f(n-1)+f(n-2)
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