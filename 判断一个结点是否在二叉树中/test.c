void TestTree()
{
    //��������
    char array[] = "abd###ce##f";
    BindaryTree<char> bt(array, strlen(array), '#');
    //����һ������Ƿ�������
    //���������
    BindaryTreeNode<char> * pos = bt.FindNode('a');
    if (pos)
        cout << "�ҵ���" << pos->_data << endl;
    else
        cout << "û�ҵ�" << endl;
    BindaryTreeNode<char> * pos_1 = bt.FindNode_Nor('a');
    if (pos_1)
        cout << "�ҵ���" << pos_1->_data << endl;
    else
        cout << "û�ҵ�" << endl;

    ////���û��������
    BindaryTreeNode<char> * pos1 = bt.FindNode('h');
    if (pos1)
        cout << "�ҵ���" << pos1->_data << endl;
    else
        cout << "û�ҵ�" << endl;
    BindaryTreeNode<char> * pos1_1 = bt.FindNode_Nor('h');
    if (pos1_1)
        cout << "�ҵ���" << pos1_1->_data << endl;
    else
        cout << "û�ҵ�" << endl;
    //����

    BindaryTree<char> bt3;
    BindaryTreeNode<char> * pos2 = bt3.FindNode('a');
    if (pos2)
        cout << "�ҵ���" <<pos2->_data<< endl;
    else
        cout << "û�ҵ�" << endl;
    BindaryTreeNode<char> * pos2_1 = bt3.FindNode_Nor('a');
    if (pos2_1)
        cout << "�ҵ���" << pos2_1->_data << endl;
    else
        cout << "û�ҵ�" << endl;
}