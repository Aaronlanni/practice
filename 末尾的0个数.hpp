����һ��������n,��n!(���׳�)ĩβ�ж��ٸ�0�� 
����: n = 10; n! = 3628800,���Դ�Ϊ2
����һ��
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

��������
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