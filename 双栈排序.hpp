class TwoStacks {
public:
    vector<int> twoStacksSort(vector<int> numbers) {
        vector<int> vt;
        if(numbers.empty())
            return vt;
        while(!numbers.empty())
        {
            int tmp=numbers.back();//ȡ��vector�е����һ�����ݣ����ҽ��䵯����
            numbers.pop_back();
            while(!vt.empty()&&vt.back()>tmp)
            {
                numbers.push_back(vt.back());
                vt.pop_back();
            }
            vt.push_back(tmp);
        }
        while(vt.size()!=0)
        {
            numbers.push_back(vt.back());
            vt.pop_back();
        }
        return numbers;
    }
};