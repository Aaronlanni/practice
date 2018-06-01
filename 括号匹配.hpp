#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stack>
#include<assert.h>
using namespace std;
bool IsMatchBrackets(char c)//�ж��Ƿ�Ϊ����
{
	if (c == '(' || c == ')' || c == '{' || c == '}'
		|| c == '<' || c == '>' || c == '[' || c == ']')
		return true;
	return false;
}
bool MatchBrackets(char*pStr)
{
	assert(pStr);//�жϴ��������ַ����Ƿ�Ϊ��
	stack<char> s;
	size_t len = strlen(pStr);
	for (int i = 0; i < len; ++i)
	{
		if (false ==IsMatchBrackets(pStr[i]))//�������ŵ����
		{
			continue;
		}
			

		else//�ж������ŵ�����
		{
			//������
			if (pStr[i] == '(' || pStr[i] == '{' || pStr[i] == '['
				|| pStr[i] == '<')
				s.push(pStr[i]);
			else//������
			{
				if (s.empty())//�ж�ջ��Ϊ��
				{
					cout << "�����Ŷ���������" << endl;
					return 0;
				}

				else//�ǿ�
				{
					if ((pStr[i] == ')'&&s.top() == '(')
						|| (pStr[i] =='}'&&s.top() == '{')
						||(pStr[i] == ']'&&s.top() == '[')
						||(pStr[i] == '>'&&s.top() == '<'))//����ƥ��
					{
						cout << "��ȫƥ��" << endl;
						s.pop();
						//return true;
					}
					else//���Ų�ƥ��
					{
						cout << "���Ŵ���������" << endl;
						return false;
					}
				}
			}
		}

	}
	if (true ==s.empty())
	{
		cout << "��ȫƥ��" << endl;
		return true;
	}
	else
	{
		cout << "�����Ŷ���������" << endl;
		return false;
	}
}
int main()
{
	char a[] = "(())abc{[(])}"; // �������Ŵ���ƥ�䲻��ȷ
	char b[] = "(()))abc{[]}"; // �����Ŷ���������
	char c[] = "(()()abc{[]}"; // �����Ŷ���������
	char d[] = "(())abc{[]()}"; // ��������ƥ����ȷ
	MatchBrackets(a);
	MatchBrackets(b);
	MatchBrackets(c);
	MatchBrackets(d);
	system("pause");
	return 0;
}
