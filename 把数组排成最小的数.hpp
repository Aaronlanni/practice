////����һ�����������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ�����������
////����С��һ����������������{3��32��321}�����ӡ���������������ųɵ�
////��С����Ϊ321323��
class Solution {
public:
    static bool cmp(int a,int b)
    {
        string A=to_string(a)+to_string(b);
        string B=to_string(b)+to_string(a);
        //����ʱA��B���������A��ֵ����B�ģ����ʱ����false�����ʱ�����������������
        return A<B;
    }
    string PrintMinNumber(vector<int> numbers) {
        string s="";
        if(numbers.empty())
            return s;
        sort(numbers.begin(),numbers.end(),cmp);//�˴������Ǹ�����cmp������Ϊ�Ƚ�
        //������ѹջ˳��Ϊ��������
        
        
        for(int i=0;i<numbers.size();++i)
        {
            s+=to_string(numbers[i]);
        }
        return s;
    }
    
    
};