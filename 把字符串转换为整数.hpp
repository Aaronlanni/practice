��Ŀ����
��һ���ַ���ת����һ������(ʵ��Integer.valueOf(string)�Ĺ��ܣ�����string����
������Ҫ��ʱ����0)��Ҫ����ʹ���ַ���ת�������Ŀ⺯���� ��ֵΪ0�����ַ�����
��һ���Ϸ�����ֵ�򷵻�0��

��������:
����һ���ַ���,����������ĸ����,����Ϊ��
�������:
����ǺϷ�����ֵ����򷵻ظ����֣����򷵻�0
ʾ��1
����
����
+2147483647
    1a33
���
����
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