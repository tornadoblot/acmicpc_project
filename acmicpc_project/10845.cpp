#include <iostream>
using namespace std;

typedef struct Node
{
	int data;
	struct Node* next;
} Node;


class Que
{

public:

	//push X : ���� X�� ť�� �ִ� �����̴�.
	void push(int x)
	{
		Node* newNode = new Node;
		newNode->data = x;
		newNode->next = nullptr;

		if (empty())
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cnt++;
	}
	//pop : ť���� ���� �տ� �ִ� ������ ����, �� ���� ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
	int pop()
	{
		if (empty())
		{
			return -1;
		}
		else
		{
			int num = head->data;

			Node* tmp = head;
			head = head->next;
			delete tmp;

			cnt--;
			return num;
		}
	}
	//size : ť�� ����ִ� ������ ������ ����Ѵ�.
	int size()
	{
		return cnt;
	}
	//empty : ť�� ��������� 1, �ƴϸ� 0�� ����Ѵ�.
	bool empty()
	{
		return !cnt;
	}
	//front : ť�� ���� �տ� �ִ� ������ ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
	int front()
	{
		if (empty())
		{
			return -1;
		}
		else
		{
			return head->data;
		}
	}
	//back : ť�� ���� �ڿ� �ִ� ������ ����Ѵ�.���� ť�� ����ִ� ������ ���� ��쿡�� - 1�� ����Ѵ�.
	int back()
	{
		if (empty())
		{
			return -1;
		}
		else
		{
			return tail->data;
		}
	}

	~Que() {
		while (!empty())
		{
			Node* tmp = head;
			head = head->next;
			delete tmp;
			cnt--;
		}
	}

private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int cnt = 0;
};


int main()
{
	int N, tmp;
	string str;
	cin >> N;
	Que q;


	while (N--)
	{
		cin >> str;
		switch (str.back())
		{
		case 'h':
			cin >> tmp;
			q.push(tmp);
			break;

		case 'p':
			cout << q.pop() << '\n';
			break;

		case 'e':
			cout << q.size() << '\n';
			break;

		case 'y':
			if (q.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
			break;

		case 't':
			cout << q.front() << '\n';
			break;

		case 'k':
			cout << q.back() << '\n';
			break;
		}
	}

}