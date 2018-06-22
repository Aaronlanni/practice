#include<iostream>
using namespace std;
#include<assert.h>
#include<string.h>
//将“talk is cheap show me the code”中的空格替换为“&&&”
    void ReplacePace(char*array, size_t size)
    {
        int count = 0;//统计字符串中空格出现的次数
        int length = 0;//新的长度
        if (size == 0)
            return;
        else
        {
            // 先统计空格的个数
            for (int i = 0; i < size; ++i)
            {
                if (array[i] == ' ')
                    count++;
            }

            //开辟相应大小的内存
            length = size + count * 2;
            int right = length;

            //替换
            while (size < right)
            {
                if (array[size] == ' ')
                {
                    array[right--] = '&';
                    array[right--] = '&';
                    array[right--] = '&';
                    size--;
                }
                else
                {
                    array[right--] = array[size];
                    size--;
                }
            }
        }
    }

int main()
{
    //有效字符串
    char array[50] = "I love The World";
    cout << "替换前：" << array << endl;
    ReplacePace(array, sizeof(array) / sizeof(*array));
    cout << "替换后：" << array << endl;
    //字符串中的size为0
    char arr[10];
    ReplacePace(arr, 0);
    system("pause");
    return 0;
}