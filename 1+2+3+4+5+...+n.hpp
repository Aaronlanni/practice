求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case
等关键字及条件判断语句（A?B:C）。

class Solution {
public:
    int Sum_Solution(int n) {
        int sum=n;
        return n==0?0:sum+=Sum_Solution(n-1);
    }
};