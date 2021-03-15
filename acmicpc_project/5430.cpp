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

		Node* pop = head;
		head = head->right;
		delete pop;

		if (!head) tail = nullptr;
		else head->left = nullptr;
	}

	void pop_back()
	{
		if (!cnt) return;
		cnt--;

		Node* pop = tail;
		tail = tail->left;
		delete pop;

		if (!tail) head = nullptr;
		else tail->right = nullptr;
	}

	bool empty()
	{
		if (!cnt) return true;
		else return false;
	}

	void print(bool isHead)
	{
		Node* tmp;

		cout << '[';
		if (!tail)
		{
			cout << ']' << '\n';
			return;
		}

		if (isHead)
		{
			tmp = head;
			while (tmp->right)
			{
				cout << tmp->n << ',';
				tmp = tmp->right;
			}
		}
		else
		{
			tmp = tail;
			while (tmp->left)
			{
				cout << tmp->n << ',';
				tmp = tmp->left;
			}
		}

		if (tmp) cout << tmp->n;
		cout << ']' << '\n';
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	while (n--)
	{
		deque deq;
		string func;
		cin >> func;

		int m, push;
		char tmp;
		cin >> m;

		cin >> tmp;
		for (int i = 0; i < m; i++)
		{
			cin >> push >> tmp;
			deq.push_back(push);
		}

		if(!m) cin >> tmp;

		bool isBreak = false, isHead = true;
		for (int i = 0; i < func.size(); i++)
		{
			if (func[i] == 'D')
			{
				if (deq.empty())
				{ 
					isBreak = true;
					break;
				}

				if (isHead) deq.pop_front();
				else deq.pop_back();
			}
			else
			{
				if (isHead) isHead = false;
				else isHead = true;
			}
		}

		if (!isBreak) deq.print(isHead);
		else cout << "error\n";
	}

	return 0;
}