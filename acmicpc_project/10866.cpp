#include <iostream>
#include <deque>
using namespace std;

class Deq {
public:
	void pushFront()
	{
		cin >> tmp;
		deq.push_front(tmp);
	}

	void pushBack()
	{
		cin >> tmp;
		deq.push_back(tmp);
	}

	void popFront()
	{
		if (deq.empty())
		{
			cout << -1 << '\n';
			return;
		}

		cout << deq.front() << '\n';
		deq.pop_front();
		return;
	}

	void popBack()
	{
		if (deq.empty())
		{
			cout << -1 << '\n';
			return;
		}

		cout << deq.back() << '\n';
		deq.pop_back();
		return;
	}

	void size()
	{
		cout << deq.size() << '\n';
		return;
	}


	void empty()
	{
		if (deq.empty()) cout << 1 << '\n';
		else cout << 0 << '\n';
		return;
	}

	void front()
	{
		if (deq.empty())
		{
			cout << -1 << '\n';
			return;
		}

		cout << deq.front() << '\n';
		return;
	}

	void back()
	{
		if (deq.empty())
		{
			cout << -1 << '\n';
			return;
		}

		cout << deq.back() << '\n';
		return;
	}

private:
	deque<int> deq;
	int tmp;
};

int main()
{
	Deq dq;

	int n, push;
	string input;

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	while (n--)
	{
		cin >> input;

		if (input == "push_front") dq.pushFront();
		else if (input == "push_back") dq.pushBack();
		else if (input == "pop_front") dq.popFront();
		else if (input == "pop_back") dq.popBack();
		else if (input == "size") dq.size();
		else if (input == "empty") dq.empty();
		else if (input == "front") dq.front();
		else if (input == "back") dq.back();

	}

	return 0;
}