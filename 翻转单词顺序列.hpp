牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。
同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。
例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，
你能帮助他么？

class Solution {
public:
    string ReverseSentence(string str) {
        int length=str.size();
        if(length==0)
            return "";
        int flag=0;
        str+=' ';//给字符串的末尾增加一个空格，以便他的反转
        for(int i=0;i<length+1;++i)
        {
            if(str[i]==' ')
            {
                Roate(str,flag,i-1);
                flag=i+1;
            }
        }
        //最后走出来，对整体的字符串进行旋转
        //还原原来的字符串
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