#include<vector>
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		if (array.empty())
			return false;
		else
		{
			int key = 0;
			int sizeCow = array.size();//�е�size
			int sizeCol = array[0].size();//�е�size
			int i = 0;//��ʾ��
			int j = sizeCol - 1;//��ʾ��
			while (j >= 0 && i<sizeCow)
			{
				key = array[i][j];
				if (key == target)
				{
					return true;
				}
				else if (key < target)
				{
					++i;
				}
				else
				{
					--j;
				}
			}
			return false;
		}
	}
};

int main()
{
	vector<vector<int>> vt(3);
	vt[0].push_back(1);
	vt[0].push_back(2);
	vt[0].push_back(3);
	vt[1].push_back(4);
	vt[1].push_back(5);
	vt[1].push_back(6);
	vt[2].push_back(7);
	vt[2].push_back(8);
	vt[2].push_back(9);

	Solution s;
	bool bl = s.Find(7, vt);
	if (bl)
		cout << "zai" << endl;
	else
		cout << "buzai" << endl;
	system("pause");
	return 0;
}
