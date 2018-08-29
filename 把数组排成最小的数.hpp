////输入一个正整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字
////中最小的一个。例如输入数组{3，32，321}，则打印出这三个数字能排成的
////最小数字为321323。
class Solution {
public:
    static bool cmp(int a,int b)
    {
        string A=to_string(a)+to_string(b);
        string B=to_string(b)+to_string(a);
        //当此时A与B组合起来，A的值大于B的，则此时返回false，则此时不是我们所需的序列
        return A<B;
    }
    string PrintMinNumber(vector<int> numbers) {
        string s="";
        if(numbers.empty())
            return s;
        sort(numbers.begin(),numbers.end(),cmp);//此处以我们给出的cmp函数作为比较
        //函数的压栈顺序为从右向左
        
        
        for(int i=0;i<numbers.size();++i)
        {
            s+=to_string(numbers[i]);
        }
        return s;
    }
    
    
};