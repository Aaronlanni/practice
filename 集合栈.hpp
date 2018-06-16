class SetOfStacks {
public:
    vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
        vector<vector<int> > vt;
        int opesize=ope.size();
        if(ope.empty()||size<=0)
            return vt;
        //n行2列
       
        vector<int> tmp;
        for(int i=0;i<opesize;i++)
        {
            //当ope中的第一个数字为1时，此时进行push操作，如果此时临时栈中的数据已满，则放在集合栈中。此时只判断第一列的数字
            //此为push操作
            if(ope[i][0]==1)
            {
                //当临时栈中的数据已满，将其放在集合栈中
                if(tmp.size()==size)
                {
                    vt.push_back(tmp);  
                    tmp.clear();
                }
                //否则将其后面的数字push到临时栈中
                tmp.push_back(ope[i][1]);
            }
            //此为pop操作
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
        //走出来，最后一个临时栈并没有存满数据，但是此时要将数据存入到集合栈中，防止数据丢失
         if(tmp.size())
             vt.push_back(tmp);
        return vt;
    }
};