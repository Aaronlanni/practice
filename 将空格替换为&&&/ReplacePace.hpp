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