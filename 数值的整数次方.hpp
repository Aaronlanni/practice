����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���
class Solution {
public:
    double Power(double base, int exponent) {
        if(base==0)
            return 0;
        if(exponent==0)
            return 1;
        int flag=abs(exponent);
        int ex=base;
        double mul=1;
        for(int i=1;i<=flag;++i)
        {
            mul*=ex;
        }
        if(exponent<0)
        {
            mul=1/mul;
        }
        return mul;
    }
};