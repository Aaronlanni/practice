#include<iostream>
using namespace std;
#include<assert.h>
#include<string.h>
//����talk is cheap show me the code���еĿո��滻Ϊ��&&&��
    void ReplacePace(char*array, size_t size)
    {
        int count = 0;//ͳ���ַ����пո���ֵĴ���
        int length = 0;//�µĳ���
        if (size == 0)
            return;
        else
        {
            // ��ͳ�ƿո�ĸ���
            for (int i = 0; i < size; ++i)
            {
                if (array[i] == ' ')
                    count++;
            }

            //������Ӧ��С���ڴ�
            length = size + count * 2;
            int right = length;

            //�滻
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