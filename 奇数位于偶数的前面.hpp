给出一个数组，使得数组中的所有元素中，奇数位于偶数的前面，且使得最后的排列位置没有发生变化
思想：给出两个临时的数组，当为奇数之时，放在奇数的临时数组中，当为偶数之时，放在偶数的临时
数组中，将所有的元素都挑拣出来之后，则在将其元素放置到原来的数组中即可。
class Solution {
public:
	void reOrderArray(vector<int> &array) {
		if (array.empty())
			return;
		vector<int> oddNum;
		vector<int> evenNum;

		int size = array.size();
		int i = 0;
		while (i < size)
		{
			if ((array[i] & 0x1) == 0)//偶数
			{
				evenNum.push_back(array[i]);
			}
			else
			{
				oddNum.push_back(array[i]);
			}
			++i;
		}
		int k = 0;
		for (i = 0; i < oddNum.size(); ++i)
		{
			array[i] = oddNum[i];
		}
		k = i;
		for (i = 0; i < evenNum.size(); ++i)
		{
			array[k++] = evenNum[i];
		}
	}
};