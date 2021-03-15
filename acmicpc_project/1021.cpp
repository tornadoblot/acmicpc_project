#include <iostream>
using namespace std;

struct Node
{
	int n;
	struct Node* left, * right;
}typedef Node;

class deque
{
public:
	void push_front(int n)
	{
		cnt++;
		Node* tmp = new Node{ n, nullptr, head };

		if (!head)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			head->left = tmp;
			head = tmp;
		}
	}

	void push_back(int n)
	{
		cnt++;
		Node* tmp = new Node{ n, tail, nullptr };

		if (!head)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->right = tmp;
			tail = tmp;
		}
	}

	void pop_front()
	{
		if (!cnt) return;
		cnt--;

		Node* del = head;
		head = head->right;
		delete del;
	}

	void pop_back()
	{
		if (!cnt) return;
		cnt--;

		Node* del = tail;
		tail = tail->left;
		delete del;
	}

	bool isheadStart(int t)
	{
		Node* left = head, * right = tail;

		while (1)
		{
			if (left->n == t)
				return true;

			if (right->n == t)
				return false;

			left = left->right;
			right = right->left;
		}
	}

	int front()
	{
		if (!cnt) return -1;
		return head->n;
	}

	int back()
	{
		if (!cnt) return -1;
		return tail->n;
	}

	~deque()
	{
		while (tail)
		{
			Node* del = tail;
			tail = tail->left;
			delete del;
		}
	}

private:
	Node* head = nullptr, * tail = nullptr;
	int cnt = 0;
};

int main()
{
	int n, m, find, cnt = 0;
	deque deq;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		deq.push_back(i);

	while (m--)
	{
		cin >> find;

		bool headStart = deq.isheadStart(find);

		while(deq.front() != find)
		{
			if (headStart)
			{
				deq.push_back(deq.front());
				deq.pop_front();
			}
			else
			{
				deq.push_front(deq.back());
				deq.pop_back();
			}
			cnt++;
		}
		
		deq.pop_front();
	}

	cout << cnt;

	return 0;
}