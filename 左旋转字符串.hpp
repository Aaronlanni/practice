�����������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵�����
�������ַ���ģ�����ָ���������������һ���������ַ�����S��
�������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,
Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK��
�㶨����
class Solution {
public:
    string LeftRotateString(string str, int n) {
        string s;
        if(str.empty()||n<0)
            return s;
        int size=str.size();
        int rote=n%size;
        vector<char> vt;
        for(int i=rote;str[i]!='\0';++i)
        {
            vt.push_back(str[i]);
        }
        for(int i=0;i<rote;++i)
        {
            vt.push_back(str[i]);
        }
        for(int i=0;i<vt.size();++i)
        {
            s[i]=vt[i];
        }
        return s;
    }
};