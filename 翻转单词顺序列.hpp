ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�
ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish������������ȴ������������˼��
���磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У�
���ܰ�����ô��

class Solution {
public:
    string ReverseSentence(string str) {
        int length=str.size();
        if(length==0)
            return "";
        int flag=0;
        str+=' ';//���ַ�����ĩβ����һ���ո��Ա����ķ�ת
        for(int i=0;i<length+1;++i)
        {
            if(str[i]==' ')
            {
                Roate(str,flag,i-1);
                flag=i+1;
            }
        }
        //����߳�������������ַ���������ת
        //��ԭԭ�����ַ���
        str=str.substr(0,length);
        Roate(str,0,length-1);
        return str;
    }
    
    void Roate(string& str,int start,int end)
    {
        while(start<end)
        {
            char tmp=str[end];
            str[end]=str[start];
            str[start]=tmp;
            start++;
            end--;
        }
    }
};