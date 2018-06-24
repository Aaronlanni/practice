size_t _TheKCount(pNode pRoot, int K)
    {
        if (K < 0 || K > Height() || pRoot == NULL)
            return 0;
        if (1 == K)
            return 1;
        int Left = _TheKCount(pRoot->_pLeft, K - 1);
        int Right = _TheKCount(pRoot->_pRight, K - 1);
        return Left + Right;
    }