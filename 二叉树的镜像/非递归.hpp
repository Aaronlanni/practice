void _Mirror_Nor(pNode pRoot)
    {
        if (NULL == pRoot)
            return;
        queue<pNode> q;
        q.push(pRoot);
        pNode pCur = NULL;
        while (!q.empty())
        {
            pCur = q.front();
            swap(pCur->_pLeft, pCur->_pRight);
            q.pop();
            if (pCur->_pLeft)
                q.push(pCur->_pLeft);
            if (pCur->_pRight)
                q.push(pCur->_pRight);
        }
    }