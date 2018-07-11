class Solution {
public:
    int jumpFloorII(int number) {
        //if(number==0)
           // return 0;
      //  if(number==1)
       //     return 1;
       // int total=0;
       // if(number>=2)
       //     total=2*jumpFloorII(number-1);
      //  return total;
       
        
        //·ÇµÝ¹é
        if(number==0)
            return 0;
        if(number==1)
            return 1;
        int total=1;
        for(int i=2;i<=number;++i)
        {
            total*=2;
        }
        return total;
    }
};