pNode _FindNode_Nor(pNode pRoot, const T&data)
{
    if (NULL == pRoot)
        return NULL;
    queue<pNode> q;
    q.push(pRoot);
    pNode pCur = NULL;
    while (!q.empty())
    {
        pCur = q.front();
        if (data == pCur->_data)
            return pCur;
        q.pop();
        if (pCur->_pLeft)
            q.push(pCur->_pLeft);
        if (pCur->_pRight)
            q.push(pCur->_pRight);
    }
    return NULL;
}