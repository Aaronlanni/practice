��1+2+3+...+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case
�ȹؼ��ּ������ж���䣨A?B:C����

class Solution {
public:
    int Sum_Solution(int n) {
        int sum=n;
        return n==0?0:sum+=Sum_Solution(n-1);
    }
};