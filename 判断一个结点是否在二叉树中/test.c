void TestTree()
{
    //利用数组
    char array[] = "abd###ce##f";
    BindaryTree<char> bt(array, strlen(array), '#');
    //查找一个结点是否在树中
    //结点在树中
    BindaryTreeNode<char> * pos = bt.FindNode('a');
    if (pos)
        cout << "找到了" << pos->_data << endl;
    else
        cout << "没找到" << endl;
    BindaryTreeNode<char> * pos_1 = bt.FindNode_Nor('a');
    if (pos_1)
        cout << "找到了" << pos_1->_data << endl;
    else
        cout << "没找到" << endl;

    ////结点没有在树中
    BindaryTreeNode<char> * pos1 = bt.FindNode('h');
    if (pos1)
        cout << "找到了" << pos1->_data << endl;
    else
        cout << "没找到" << endl;
    BindaryTreeNode<char> * pos1_1 = bt.FindNode_Nor('h');
    if (pos1_1)
        cout << "找到了" << pos1_1->_data << endl;
    else
        cout << "没找到" << endl;
    //空树

    BindaryTree<char> bt3;
    BindaryTreeNode<char> * pos2 = bt3.FindNode('a');
    if (pos2)
        cout << "找到了" <<pos2->_data<< endl;
    else
        cout << "没找到" << endl;
    BindaryTreeNode<char> * pos2_1 = bt3.FindNode_Nor('a');
    if (pos2_1)
        cout << "找到了" << pos2_1->_data << endl;
    else
        cout << "没找到" << endl;
}