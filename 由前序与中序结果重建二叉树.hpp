//��ǰ���������������Ľ���ؽ�������
pNode RebulitBindaryTree(T*PreResult, size_t PreLen, T*InResult, size_t InLen)
{
	if (PreLen != InLen || PreResult == NULL || InResult == NULL)
		return NULL;
	int index = 0;
	_pRoot = _RebulitBindaryTree1(PreResult, PreLen, InResult, 0, InLen, index);//�˴���������ķ�Χ
	return _pRoot;
}

pNode _RebulitBindaryTree1(T*PreResult, int PreSize, T*PreEnd, int left, int right, int &index)
{
	int i = 0;
	pNode pRoot = new Node(PreResult[index]);
	if (left > right || PreResult == NULL || PreEnd == NULL)
		return pRoot;
	if ((index + 1) > right)
		return pRoot;

	else
	{
		for (; i < right; ++i)
		{
			//ȷ���������ķ�Χ[0,i),��ʱiֵ��ȵĵط���������������еĸ��ڵ�
			if (PreEnd[i] == PreResult[index])
				break;
		}
		
		
	
		int rootIdxOfMid = i;
		if (i > 0)
		{
			//�ؽ�������
			pRoot->_pLeft = _RebulitBindaryTree1(PreResult, PreSize, PreEnd, index, rootIdxOfMid, ++index);
		}
		if (i < right)
		{
			//�ؽ�������
			pRoot->_pRight = _RebulitBindaryTree1(PreResult, PreSize, PreEnd, rootIdxOfMid + 1, right, ++index);
		}
	}
	
	return pRoot;
}
