void TestTree()
{
    //��������
    char array[] = "abd###ce##f";
    BindaryTree<char> bt(array, strlen(array), '#');
    cout << "�ǿ�����������" << endl;
    cout << "LeafCount=" << bt.LeafCount() << endl;

    char array1[] = "a";
    BindaryTree<char> bt2(array1, strlen(array1), '#');
    cout << "�ǿ�����һ�����" << endl;
    cout << "LeafCount=" << bt2.LeafCount() << endl;
    BindaryTree<char> bt3;
    cout << "����" << endl;
    cout << "LeafCount=" << bt3.LeafCount() << endl;
}