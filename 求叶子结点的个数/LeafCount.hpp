size_t LeafCount()
    {
        int count = 0;
        count = _LeafCount(_pRoot);
        return count;
    }
size_t _LeafCount(pNode pRoot)
    {
        if (NULL == pRoot)
            return 0;
        if (pRoot->_pLeft == NULL&&pRoot->_pRight == NULL)
            return 1;
        return _LeafCount(pRoot->_pLeft) + _LeafCount(pRoot->_pRight);
    }