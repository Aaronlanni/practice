class SetOfStacks {
public:
    vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
        vector<vector<int> > vt;
        int opesize=ope.size();
        if(ope.empty()||size<=0)
            return vt;
        //n��2��
       
        vector<int> tmp;
        for(int i=0;i<opesize;i++)
        {
            //��ope�еĵ�һ������Ϊ1ʱ����ʱ����push�����������ʱ��ʱջ�е���������������ڼ���ջ�С���ʱֻ�жϵ�һ�е�����
            //��Ϊpush����
            if(ope[i][0]==1)
            {
                //����ʱջ�е�����������������ڼ���ջ��
                if(tmp.size()==size)
                {
                    vt.push_back(tmp);  
                    tmp.clear();
                }
                //��������������push����ʱջ��
                tmp.push_back(ope[i][1]);
            }
            //��Ϊpop����
            else
            {
                if(tmp.size()==0)
                {
                    int tmpsize=vt.size();
                    if(vt.size()==0)
                        continue;
                    tmp =vt[tmpsize-1];
                    vt.pop_back();
                }
                tmp.pop_back();
               
            }
        }
        //�߳��������һ����ʱջ��û�д������ݣ����Ǵ�ʱҪ�����ݴ��뵽����ջ�У���ֹ���ݶ�ʧ
         if(tmp.size())
             vt.push_back(tmp);
        return vt;
    }
};