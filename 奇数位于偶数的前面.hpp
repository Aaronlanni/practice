����һ�����飬ʹ�������е�����Ԫ���У�����λ��ż����ǰ�棬��ʹ����������λ��û�з����仯
˼�룺����������ʱ�����飬��Ϊ����֮ʱ��������������ʱ�����У���Ϊż��֮ʱ������ż������ʱ
�����У������е�Ԫ�ض��������֮�����ڽ���Ԫ�ط��õ�ԭ���������м��ɡ�
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
			if ((array[i] & 0x1) == 0)//ż��
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