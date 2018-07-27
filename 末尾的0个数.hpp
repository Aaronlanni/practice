输入一个正整数n,求n!(即阶乘)末尾有多少个0？ 
比如: n = 10; n! = 3628800,所以答案为2
方法一：
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    do{
        n/=5;
        count+=n;
    }while(n);
    cout<<count<<endl;
    return 0;
}

方法二：
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        count+=n/5;
        n/=5;
    }
    cout<<count<<endl;
    return 0;
}