#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> stk;
	int k, tmp;

	cin >> k;

	while (k--)
	{
		cin >> tmp;
		if (tmp == 0) stk.pop();
		else stk.push(tmp);
	}

	int sum = 0;

	while(!stk.empty())
	{
		sum += stk.top();
		stk.pop();
	}

	cout << sum << '\n';

	return 0;
}