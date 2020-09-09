#include <iostream>
using namespace std;

int Stack[10001];
int top = -1;

//push X : ���� X�� ���ÿ� �ִ� �����̴�.
//pop : ���ÿ��� ���� ���� �ִ� ������ ����, �� ���� ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
//size : ���ÿ� ����ִ� ������ ������ ����Ѵ�.
//empty : ������ ��������� 1, �ƴϸ� 0�� ����Ѵ�.
//top : ������ ���� ���� �ִ� ������ ����Ѵ�.���� ���ÿ� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.

int main()
{
	int N, tmp;
	string str;
	cin >> N;

	while (N--)
	{
		cin >> str;

		if (str == "push")
		{
			cin >> tmp;

			Stack[++top] = tmp;
		}
		else if (str == "pop")
		{
			if (top == -1)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << Stack[top--] << '\n';
			}
		}
		else if (str == "size")
		{
			cout << top + 1 << '\n';
		}
		else if (str == "empty")
		{
			if (top == -1)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else
		{
			if (top == -1)
				cout << -1 << '\n';
			else
				cout << Stack[top] << '\n';
		}
	}

}