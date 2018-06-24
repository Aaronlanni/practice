void TestTree()
{
    //利用数组
    char array[] = "abd###ce##f";
    BindaryTree<char> bt(array, strlen(array), '#');
    cout << "非空树，多个结点" << endl;
    cout << "LeafCount=" << bt.LeafCount() << endl;

    char array1[] = "a";
    BindaryTree<char> bt2(array1, strlen(array1), '#');
    cout << "非空树，一个结点" << endl;
    cout << "LeafCount=" << bt2.LeafCount() << endl;
    BindaryTree<char> bt3;
    cout << "空树" << endl;
    cout << "LeafCount=" << bt3.LeafCount() << endl;
}