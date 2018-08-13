����һ�����󣬰��մ���������˳ʱ���˳�����δ�ӡ��ÿһ�����֣����磬�������
����4 X 4���� 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 �����δ�ӡ������
1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10
//ע��߽���������
//һ��һ�У�һ�����У�����һ�У����ж���
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> vt;
        if(matrix.empty())
        {
            return vt;
        }
        int row=matrix.size();//��
        int col=matrix[0].size();//��
        int left=0;
        int right=col-1;
        int up=0;
        int down=row-1;
        while(left<=right&&up<=down)
        {
            for(int i=left;i<=right;++i)//�������
                vt.push_back(matrix[up][i]);
            
            if(up<down)
            {
                for(int j=up+1;j<=down;++j)//�ұߵ���
                    vt.push_back(matrix[j][right]);
            }
            //ֻ��һ��
            if(up<down&&left<right)
            {
                for(int p=right-1;p>=left;--p)//�������
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