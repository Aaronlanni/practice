输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，例如，如果输入
如下4 X 4矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字
1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10
//注意边界问题的设计
//一行一列，一行两列，两行一列，多行多列
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> vt;
        if(matrix.empty())
        {
            return vt;
        }
        int row=matrix.size();//行
        int col=matrix[0].size();//列
        int left=0;
        int right=col-1;
        int up=0;
        int down=row-1;
        while(left<=right&&up<=down)
        {
            for(int i=left;i<=right;++i)//上面的行
                vt.push_back(matrix[up][i]);
            
            if(up<down)
            {
                for(int j=up+1;j<=down;++j)//右边的列
                    vt.push_back(matrix[j][right]);
            }
            //只有一列
            if(up<down&&left<right)
            {
                for(int p=right-1;p>=left;--p)//下面的行
                    vt.push_back(matrix[down][p]);
            }
            if(up+1<down&&left<right)
            {
                for(int l=down-1;l>=up+1;--l)
                    vt.push_back(matrix[l][left]);
            }
            left++;
            right--;
            up++;
            down--;
        }
        return vt;
    }
};