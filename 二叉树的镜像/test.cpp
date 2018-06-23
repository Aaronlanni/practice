void TestTree()
{
    //利用数组
    char array[] = "abd###ce##f";
    BindaryTree<char> bt(array, strlen(array), '#');
    cout << "@非空树" << endl;
    bt.Mirror();
    bt.FrontOrder();
    bt.Mirror_Nor();
    bt.FrontOrder();
    //空树
    BindaryTree<char> bt3;
    cout << "@空树" << endl;
    bt3.Mirror();
    bt3.FrontOrder();
    bt3.Mirror_Nor();
    bt3.FrontOrder();
}