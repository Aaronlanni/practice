Given an array and a value, remove all instances of that value in 
place and return the new length. The order of elements can be changed.
 It doesn't matter what you leave beyond the new length. 


class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(A==NULL||n<=0)
            return 0;
        int lastnum=A[0];
        int newlength=n;
        int index=1;
        for(int i=1;i<n;++i)
        {
            A[index]=A[i];
            if(lastnum!=A[i])
            {
                index++;
            }
            else
            {
                newlength--;
            }
            lastnum=A[i];
        }
        return newlength;
    }
};