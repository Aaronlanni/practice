void TestTree()
{
    //��������
    char array[] = "abd###ce##f";
    BindaryTree<char> bt(array, strlen(array), '#');
    cout << "@�ǿ���" << endl;
    bt.Mirror();
    bt.FrontOrder();
    bt.Mirror_Nor();
    bt.FrontOrder();
    //����
    BindaryTree<char> bt3;
    cout << "@����" << endl;
    bt3.Mirror();
    bt3.FrontOrder();
    bt3.Mirror_Nor();
    bt3.FrontOrder();
}