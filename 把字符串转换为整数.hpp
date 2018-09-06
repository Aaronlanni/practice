题目描述
将一个字符串转换成一个整数(实现Integer.valueOf(string)的功能，但是string不符
合数字要求时返回0)，要求不能使用字符串转换整数的库函数。 数值为0或者字符串不
是一个合法的数值则返回0。

输入描述:
输入一个字符串,包括数字字母符号,可以为空
输出描述:
如果是合法的数值表达则返回该数字，否则返回0
示例1
输入
复制
+2147483647
    1a33
输出
复制
2147483647
    0

class Solution {
public:
    int StrToInt(string str){
        
        int length=str.size();
        int i=0;
        int ret=0;
        int flag=1;
        
        for(;i<length;++i)
        {
            if(str[i]=='-')
            {
                flag=-flag;
            }
            else if(str[i]=='+')
            {
                flag=flag;
            }
            else if(str[i]>='0'&&str[i]<='9')
            {
                ret=ret*10+(str[i]-'0');
            }
            else
                return 0;
        }
        return flag*ret;
    }
};