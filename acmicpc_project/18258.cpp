#include <iostream>
#include <queue>
using namespace std;

struct node {
	int n;
	struct node* next;
}typedef Node;

class Que
{
public:

	Que()
	{
		head = nullptr;
		cnt = 0;
	}

	void push(int x)
	{
		Node* tmp = new Node{ x, nullptr };

		if (empty())
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tmp;
		}
		cnt++;
		return;
	}

	int pop()
	{
		if (empty()) return -1;

		cnt--;
		int re = head->n;

		Node* tmp = head;
		head = head->next;
		delete tmp;

		return re;
	}

	int size()
	{
		return cnt;
	}

	int empty()
	{
		if (!head) return 1;
		else return 0;
	}

	int front()
	{
		if (empty()) return -1;

		return head->n;
	}

	int back()
	{
		if (empty()) return -1;

		return tail->n;
	}

	~Que()
	{
		Node* tmp;
		while (head)
		{
			tmp = head;
			head = head->next;
			delete tmp;
		}
	}

private:
	Node* head, *tail;
	int cnt;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	Que q;
	int n, push;
	string input;

	cin >> n;

	while (n--)
	{
		cin >> input;

		switch (input[input.size() - 2])
		{
		case 's': cin >> push; q.push(push); break;
		case 'o': cout << q.pop() << '\n'; break;
		case 'z': cout << q.size() << '\n'; break;
		case 't': cout << q.empty() << '\n'; break;
		case 'n': cout << q.front() << '\n'; break;
		case 'c': cout << q.back() << '\n'; break;
		}
	}
	
	return 0;
}