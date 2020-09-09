#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

void print(bool& isBal, stack<char>& stk, int& len)
{
	if (isBal) printf("yes\n");
	else printf("no\n");

	while (!stk.empty())
		stk.pop();

	len = -1;
	isBal = true;

	return;
}

int main()
{
	char input, tmp;
	int len = -1;
	bool isBal = true;
	stack<char> stk;

	while (1)
	{
		// cin�� ��� ����� �ٹٲ��� �����ϱ⿡ scanf ���
		scanf("%c", &input);
		len++;

		switch (input)
		{
		case '(':
		case '[':
			// )]�� ������ �� �񱳽��� �ܼ�ȭ �ϱ� ���� �Է¹��� ([�� )]�� �ٲ� ���ÿ� Ǫ��
			if (input == '(') input++;
			else input += 2;
			stk.push(input); 
			break;

		case ')':
		case ']':
			// ������ ������� �� top()�Լ� ���� ���� �߻�, �̸� break�� case Ż��
			if (stk.empty())
			{
				isBal = false;
				break;
			}

			tmp = stk.top();
			stk.pop();
			if (tmp != input) isBal = false;
			break;

		// �ٹٲ� ������ ��� ���ڿ� ���̿� ���Խ�Ű�� ����
		case '\n': len++; break;

		case '.':
			if (!len) return 0;
			else {
				if (!stk.empty()) isBal = false;
			}

			print(isBal, stk, len);
			break;
		}
	}

	return 0;
}