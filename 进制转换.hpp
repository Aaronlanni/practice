给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数

#include<iostream>
using namespace std;

int main()
{
    int m=0;
    int n=0;
    cin>>m;
    cin>>n;
    string s="";
    string flag="0123456789ABCDEF";
    if(m==0)
        s="0";
    
    while(m)
    {
        if(m<0)
        {
            m=-m;
            cout<<"-";
        }
        s=flag[m%n]+s;
        m/=n;
    }
    cout<<s<<endl;
    return 0;
    
}