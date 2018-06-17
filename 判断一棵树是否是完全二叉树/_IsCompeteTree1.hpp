bool _IsCompeteTree1(pNode pRoot)
{
	if (NULL == pRoot)
		return true;
	bool flag = false;
	pNode pCur = NULL;
	queue<pNode> q;
	q.push(pRoot);
	while (!q.empty())
	{
		pCur = q.front();
		
		//��ǰ���ֻ����----->����
		if (pCur->_pLeft == NULL&&pCur->_pRight)
			return false;
		//��ǰ���ֻ����������Ҷ�������----->�жϵ�ǰ������һ�����
		//�жϵ�ǰ������һ�����
		if (flag&&(pCur->_pLeft != NULL || pCur->_pRight != NULL))
			return false;

		if (pCur->_pLeft == NULL || pCur->_pRight == NULL)
		{
			flag = true;
		}

		if (pCur->_pLeft)
			q.push(pCur->_pLeft);
		if (pCur->_pRight)
			q.push(pCur->_pRight);

		q.pop();
	}
	return true;
}
