����һ��ʮ������M���Լ���Ҫת���Ľ�����N����ʮ������Mת��ΪN������

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