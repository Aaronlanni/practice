����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc,
���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
��������:
����һ���ַ���,���Ȳ�����9(�������ַ��ظ�),�ַ�ֻ������Сд��ĸ��
class Solution {
public:
    vector<string> Permutation(string str) {
        vector<string> s;
        if(str.empty())
        {
            return s;
        }
        AllPermutation(str,str.size(),0);//�ӵ�һ���ַ���ʼ��Ȼ���ڶԺ�����ַ����н���
        //�Ӷ��γɲ�һ�����������
        
        for(set<string>::iterator iter = st.begin(); 
            iter != st.end(); ++iter)
        {
            s.push_back(*iter);
        }
        return s;
    }
    void AllPermutation(string str,size_t size,size_t n)
    {
        //��ʱ���е�������ԭ�������Ԫ�ظ�����ͬ�����ʱ���������ѹ�뵽set��
        if(size==n)
            st.insert(str);
        else
        {
            AllPermutation(str,size,n+1);
            for(int i=n+1;i<size;++i)
            {
                //��һ���������֮�󣬽���ÿ��λ�õ��ַ���ʹ���γ��µ�����
                if(str[i]!=str[n])//��ֹ������ͬ���ַ�
                {
                    char tmp=str[i];
                    str[i]=str[n];
                    str[n]=tmp;
                    
                    //������ɣ��ڶ����������
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