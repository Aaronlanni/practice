输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,
则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
输入描述:
输入一个字符串,长度不超过9(可能有字符重复),字符只包括大小写字母。
class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> s;
        if(str.empty())
        {
            return s;
        }
        AllPermutation(str,str.size(),0);//从第一个字符开始，然后在对后面的字符进行交换
        //从而形成不一样的排列组合
        
        for(set<string>::iterator iter = st.begin(); 
            iter != st.end(); ++iter)
        {
            s.push_back(*iter);
        }
        return s;
    }
    void AllPermutation(string str,size_t size,size_t n)
    {
        //此时排列的序列与原本数组的元素个数相同，则此时将这个排列压入到set中
        if(size==n)
            st.insert(str);
        else
        {
            AllPermutation(str,size,n+1);
            for(int i=n+1;i<size;++i)
            {
                //当一次排列完成之后，交换每个位置的字符，使其形成新的排列
                if(str[i]!=str[n])//防止出现相同的字符
                {
                    char tmp=str[i];
                    str[i]=str[n];
                    str[n]=tmp;
                    
                    //交换完成，在对其进行排列
                    AllPermutation(str,size,n+1);
                    tmp=str[i];
                    str[i]=str[n];
                    str[n]=tmp;
                }
            }
        }
    }
private:
    set<string> st;
};