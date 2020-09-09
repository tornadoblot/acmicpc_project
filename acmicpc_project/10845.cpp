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

	//push X : 정수 X를 큐에 넣는 연산이다.
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
	//pop : 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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
	//size : 큐에 들어있는 정수의 개수를 출력한다.
	int size()
	{
		return cnt;
	}
	//empty : 큐가 비어있으면 1, 아니면 0을 출력한다.
	bool empty()
	{
		return !cnt;
	}
	//front : 큐의 가장 앞에 있는 정수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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
	//back : 큐의 가장 뒤에 있는 정수를 출력한다.만약 큐에 들어있는 정수가 없는 경우에는 - 1을 출력한다.
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