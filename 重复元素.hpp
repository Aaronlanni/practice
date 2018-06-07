�����е��ظ�Ԫ��
class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        if(numbers==NULL||length<1)
        {
            duplication=NULL;
            return false;
        }
          int tmp=0;
          for(int i=0;i<length;++i)
          {
              //��¼Ԫ���Ƿ�����Ӧ��λ����
              while(numbers[i]!=i)
              {
                  tmp=numbers[i];
                  if(numbers[i]==numbers[tmp])
                  {
                      *duplication=tmp;
                      return true;
                  }
                  else
                  {
                      int temp=numbers[i];
                      numbers[i]=numbers[tmp];
                      numbers[tmp]=tmp;
                  }
              }
          }
        duplication=NULL;
        return false;
    }
};