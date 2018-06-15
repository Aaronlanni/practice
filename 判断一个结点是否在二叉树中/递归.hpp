pNode FindNode(const T&data)
{
    pNode pCur = _FindNode(_pRoot, data);
     return pCur;
}
pNode _FindNode(pNode pRoot, const T &data)
{
     if (NULL == pRoot)
    	 return NULL;
     if (data == pRoot->_data)
         return pRoot;
     pNode Ret = NULL;
     if (Ret = _FindNode(pRoot->_pLeft, data))
         return Ret;
     return  _FindNode(pRoot->_pRight,data);
}
