//由前序遍历与中序遍历的结果重建二叉树
pNode RebulitBindaryTree(T*PreResult, size_t PreLen, T*InResult, size_t InLen)
{
	if (PreLen != InLen || PreResult == NULL || InResult == NULL)
		return NULL;
	int index = 0;
	_pRoot = _RebulitBindaryTree1(PreResult, PreLen, InResult, 0, InLen, index);//此处给出区间的范围
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
			//确定左子树的范围[0,i),此时i值相等的地方就是在中序遍历中的根节点
			if (PreEnd[i] == PreResult[index])
				break;
		}
		
		
	
		int rootIdxOfMid = i;
		if (i > 0)
		{
			//重建左子树
			pRoot->_pLeft = _RebulitBindaryTree1(PreResult, PreSize, PreEnd, index, rootIdxOfMid, ++index);
		}
		if (i < right)
		{
			//重建右子树
			pRoot->_pRight = _RebulitBindaryTree1(PreResult, PreSize, PreEnd, rootIdxOfMid + 1, right, ++index);
		}
	}
	
	return pRoot;
}
